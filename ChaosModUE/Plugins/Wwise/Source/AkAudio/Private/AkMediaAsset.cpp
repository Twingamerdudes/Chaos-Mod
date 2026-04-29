/*******************************************************************************
The content of the files in this repository include portions of the
AUDIOKINETIC Wwise Technology released in source code form as part of the SDK
package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use these files in accordance with the end user license agreement provided
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Copyright (c) 2021 Audiokinetic Inc.
*******************************************************************************/

#include "AkMediaAsset.h"

#include "AkAudioDevice.h"
#include "AkAudioModule.h"
#include "AkUnrealIOHook.h"
#include "HAL/PlatformProperties.h"
#include "Core/Public/Modules/ModuleManager.h"
#include "Misc/ScopeExit.h"

#if WITH_EDITOR
#include "Platforms/AkPlatformInfo.h"
#include "Interfaces/ITargetPlatform.h"
#endif


FAkMediaDataChunk::FAkMediaDataChunk() { }

#if WITH_EDITOR
FAkMediaDataChunk::FAkMediaDataChunk(IFileHandle* FileHandle, int64 BytesToRead, uint32 BulkDataFlags, FCriticalSection* DataWriteLock, bool IsPrefetch)
	: IsPrefetch(IsPrefetch)
{
	FScopeLock DataLock(DataWriteLock);
	Data.SetBulkDataFlags(BulkDataFlags);
	Data.Lock(EBulkDataLockFlags::LOCK_READ_WRITE);
	FileHandle->Read(reinterpret_cast<uint8*>(Data.Realloc(BytesToRead)), BytesToRead);
	Data.Unlock();
}
#endif

void FAkMediaDataChunk::Serialize(FArchive& Ar, UObject* Owner)
{
	Ar << IsPrefetch;
	Data.Serialize(Ar, Owner);
}

void UAkMediaAssetData::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	int32 numChunks = DataChunks.Num();
	Ar << numChunks;

	if (Ar.IsLoading())
	{
		DataChunks.Empty();
		for (int32 i = 0; i < numChunks; ++i)
		{
			DataChunks.Add(new FAkMediaDataChunk());
		}
	}

	for (int32 i = 0; i < numChunks; ++i)
	{
		DataChunks[i].Serialize(Ar, this);
	}

	if (Ar.IsLoading())
	{
		if (NeedsAutoLoading())
		{
			Load(true);
			FExternalReadCallback ExternalReadCallback = [this](double RemainingTime)
			{
#if !WITH_EDITOR
				if (LoadingRequest)
				{
					if (RemainingTime < 0.0 && !LoadingRequest->PollCompletion())
					{
						return false;
					}
					else if (RemainingTime >= 0.0 && !LoadingRequest->WaitCompletion(RemainingTime))
					{
						return false;
					}
					return true;
				}
#endif
				return State == LoadState::Loaded || State == LoadState::Error;
			};
			Ar.AttachExternalReadDependency(ExternalReadCallback);
		}
	}
}

bool UAkMediaAssetData::IsReadyForAsyncPostLoad() const
{
	if (!FModuleManager::Get().IsModuleLoaded(IAkAudioModule::GetAkAudioModuleName()))
	{
		return true;
	}
	
	if (NeedsAutoLoading())
	{
		return State == LoadState::Loaded || State == LoadState::Error;
	}

	return true;
}

void UAkMediaAssetData::Load(bool LoadAsync, const MediaAssetDataLoadAsyncCallback& LoadedCallback)
{
#if !WITH_EDITOR
	if (LoadingRequest)
	{
		if (!LoadingRequest->PollCompletion())
		{
			LoadingRequest->Cancel();
			LoadingRequest->WaitCompletion();
		}
		delete LoadingRequest; LoadingRequest = nullptr;
	}
#endif
	if (DataChunks.Num() > 0 && !LoadedMediaData)
	{
#if !WITH_EDITOR
		BulkDataRequestCompletedCallback LoadAsyncCompleted = [this, LoadedCallback](bool bWasCancelled, ReadRequestArgumentType* ReadRequest) 
		{
			if (bWasCancelled)
			{
				FreeMediaMemory(ReadRequest->GetReadResults());
				State = LoadState::Error;
				FString MediaName;
#if WITH_EDITORONLY_DATA
				if (Parent)
				{
					MediaName = Parent->MediaName;
				}
#endif
				uint32 MediaID = Parent ? Parent->Id : 0;
				UE_LOG(LogAkAudio, Error, TEXT("Bulk data streaming request for '%s' (ID: %u) was cancelled. Media will be unavailable."), *MediaName, MediaID);
				return;
			}

			LoadedMediaData = ReadRequest->GetReadResults();
			State = LoadState::Loaded;

			if (LoadedCallback)
			{
				LoadedCallback(LoadedMediaData, DataChunks[0].Data.GetBulkDataSize());
			}
		};

		if (DataChunks[0].Data.CanLoadFromDisk() && LoadAsync)
		{
			uint8* TempReadMediaMemory = AllocateMediaMemory();
			State = LoadState::Loading;
			LoadingRequest = DataChunks[0].Data.CreateStreamingRequest(EAsyncIOPriorityAndFlags::AIOP_High, &LoadAsyncCompleted, TempReadMediaMemory);
		}
		else
#endif
		{
			LoadedMediaData = AllocateMediaMemory();
			auto BulkMediaDataSize = DataChunks[0].Data.GetBulkDataSize();
			DataChunks[0].Data.GetCopy((void**)&LoadedMediaData, false);
			State = LoadState::Loaded;

			if (LoadedCallback)
			{
				LoadedCallback(LoadedMediaData, BulkMediaDataSize);
			}
		}
	}
}

void UAkMediaAssetData::Unload()
{
#if !WITH_EDITOR
	if (LoadingRequest)
	{
		if (!LoadingRequest->PollCompletion())
		{
			LoadingRequest->Cancel();
			LoadingRequest->WaitCompletion();
		}
		delete LoadingRequest; LoadingRequest = nullptr;
	}
#endif
	if (LoadedMediaData)
	{
		FreeMediaMemory(LoadedMediaData);
		LoadedMediaData = nullptr;
		State = LoadState::Unloaded;
	}
}

void UAkMediaAssetData::BeginDestroy()
{
	Super::BeginDestroy();

#if !WITH_EDITOR
	if (LoadingRequest && !LoadingRequest->PollCompletion())
	{
		LoadingRequest->Cancel();
	}
#endif
}

bool UAkMediaAssetData::IsReadyForFinishDestroy()
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		return Super::IsReadyForFinishDestroy();
	}
#if !WITH_EDITOR
	if (LoadingRequest)
	{
		if (LoadingRequest->WaitCompletion(0.01f))
		{
			delete LoadingRequest; LoadingRequest = nullptr;
		}
		else
		{
			return false;
		}
	}
#endif
	// Don't let this get destroyed before parent unsets the media in the soundengine
	if (Parent && Parent->bIsMediaSet)
	{
		return false;
	}
	else
	{
		//Don't leak memory
		if (LoadedMediaData)
		{
			UE_LOG(LogAkAudio, Warning, TEXT("Freeing media memory because parent asset was destroyed"));
			FreeMediaMemory(LoadedMediaData);
			LoadedMediaData = nullptr;
			State = LoadState::Unloaded;
		}
	}

	return Super::IsReadyForFinishDestroy();
}


bool UAkMediaAssetData::NeedsAutoLoading() const
{
	if (DataChunks.Num() > 0)
	{
		if (!IsStreamed || (IsStreamed && DataChunks.Num() > 1 && DataChunks[0].IsPrefetch))
		{
			if (Parent && Parent->AutoLoad)
			{
				return true;
			}
		}
	}

	return false;
}

uint8* UAkMediaAssetData::AllocateMediaMemory()
{
	if (DataChunks.Num() > 0)
	{
		auto BulkMediaDataSize = DataChunks[0].Data.GetBulkDataSize();
#if AK_SUPPORT_DEVICE_MEMORY
		if (UseDeviceMemory)
		{
			return (AkUInt8*)AKPLATFORM::AllocDevice(BulkMediaDataSize, 0);
		}
		else
#endif
		{
			return static_cast<uint8*>(FMemory::Malloc(BulkMediaDataSize));
		}
	}

	return nullptr;
}

void  UAkMediaAssetData::FreeMediaMemory(uint8* MediaMemory)
{
	if (!MediaMemory)
	{
		return;
	}

#if AK_SUPPORT_DEVICE_MEMORY
	if (UseDeviceMemory)
	{
		AKPLATFORM::FreeDevice(MediaMemory, DataChunks[0].Data.GetBulkDataSize(), 0, true);
	}
	else
#endif
	{
		FMemory::Free(MediaMemory);
	}
}

void UAkMediaAsset::Serialize(FArchive& Ar)
{
	SerializeHasBeenCalled = true;
	bIsMediaSet = false;
	Super::Serialize(Ar);
	if (Ar.IsLoading())
	{
		ForceAutoLoad = AutoLoad | LoadFromSerialize;
	}

#if WITH_EDITORONLY_DATA
	if (Ar.IsFilterEditorOnly())
	{
		if (Ar.IsSaving())
		{
			FString PlatformName = Ar.CookingTarget()->IniPlatformName();
			if (UAkPlatformInfo::UnrealNameToWwiseName.Contains(PlatformName))
			{
				PlatformName = *UAkPlatformInfo::UnrealNameToWwiseName.Find(PlatformName);
			}
			auto CurrentMediaData = MediaAssetDataPerPlatform.Find(*PlatformName);
			CurrentMediaAssetData = CurrentMediaData ? *CurrentMediaData : nullptr;
		}

		Ar << CurrentMediaAssetData;
	}
	else
	{
		Ar << MediaAssetDataPerPlatform;
	}
#else
	Ar << CurrentMediaAssetData;
#endif

	if (Ar.IsLoading())
	{
		if (auto MediaAssetData = GetMediaAssetData())
		{
			MediaAssetData->Parent = this;
		}
	}
}

void UAkMediaAsset::PostLoad()
{
	Super::PostLoad();
	
	if (AutoLoad || ForceAutoLoad)
	{
		Load();
	}
}

#if WITH_EDITOR
#include "Async/Async.h"
void UAkMediaAsset::Reset()
{
	if (LoadRefCount.GetValue() > 0)
	{
		LoadRefCount.Set(1);
		Unload();
	}

	bool bChanged = false;
	if (MediaAssetDataPerPlatform.Num() > 0 || !MediaName.IsEmpty() || CurrentMediaAssetData != nullptr)
	{
		bChanged = true;
	}

	if (auto AssetData = GetMediaAssetData())
	{
		AssetData->Parent = nullptr;
	}

	MediaAssetDataPerPlatform.Empty();
	MediaName.Empty();
	CurrentMediaAssetData = nullptr;
	bIsMediaSet = false;
	
	if (bChanged)
	{
		AsyncTask(ENamedThreads::GameThread, [this] {
			MarkPackageDirty();
			});
	}
}

UAkMediaAssetData* UAkMediaAsset::FindOrAddMediaAssetData(const FString& Platform)
{
	auto PlatformData = MediaAssetDataPerPlatform.Find(Platform);
	if (PlatformData)
	{
		return *PlatformData;
	}

	auto NewPlatformData = NewObject<UAkMediaAssetData>(this);
	MediaAssetDataPerPlatform.Add(Platform, NewPlatformData);
	return NewPlatformData;
}
#endif

void UAkMediaAsset::Load(bool bFromSerialize /*= false*/)
{
	if (!FModuleManager::Get().IsModuleLoaded(IAkAudioModule::GetAkAudioModuleName()))
	{
		FAkAudioDevice::DelayMediaLoad(this);
		return;
	}

	if (UNLIKELY(bFromSerialize && !SerializeHasBeenCalled))
	{
		LoadFromSerialize = true;
	}
	else
	{
		LoadAndSetMedia(true);
	}
}

void UAkMediaAsset::Unload()
{
	UnloadMedia();
}

bool UAkMediaAsset::IsReadyForAsyncPostLoad() const
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		return true;
	}
	if (auto MediaAssetData = GetMediaAssetData())
	{
		return MediaAssetData->IsReadyForAsyncPostLoad();
	}

	return true;
}

FAkMediaDataChunk const* UAkMediaAsset::GetStreamedChunk() const
{
	auto MediaAssetData = GetMediaAssetData();
	if (!MediaAssetData || MediaAssetData->DataChunks.Num() <= 0)
	{
		return nullptr;
	}

	if (!MediaAssetData->DataChunks[0].IsPrefetch)
	{
		return &MediaAssetData->DataChunks[0];
	}

	if (MediaAssetData->DataChunks.Num() >= 2)
	{
		return &MediaAssetData->DataChunks[1];
	}

	return nullptr;
}

void UAkMediaAsset::LoadAndSetMedia(bool bLoadAsync)
{
	auto MediaAssetData = GetMediaAssetData();
	if (!MediaAssetData || MediaAssetData->DataChunks.Num() <= 0)
	{
#if WITH_EDITOR
		ForceAutoLoad = true;
#endif
		return;
	}

	auto& DataChunk = MediaAssetData->DataChunks[0];
	if (MediaAssetData->IsStreamed && !DataChunk.IsPrefetch)
	{
		FAkUnrealIOHook::AddStreamingMedia(this);
		LoadRefCount.Increment();
		return;
	}

#if !WITH_EDITOR
	if (DataChunk.Data.GetBulkDataSize() <= 0)
	{
		return;
	}
#endif

	if (LoadRefCount.GetValue() == 0)
	{
		if (MediaAssetData->IsLoaded())
		{
			DoSetMedia(MediaAssetData->LoadedMediaData, MediaAssetData->DataChunks[0].Data.GetBulkDataSize());
		}
		else
		{
			MediaAssetData->Load(bLoadAsync, [this, MediaAssetData](uint8* MediaData, int64 MediaDataSize)
				{
					DoSetMedia(MediaAssetData->LoadedMediaData, MediaAssetData->DataChunks[0].Data.GetBulkDataSize());
				});
		}
	}
	else
	{
		LoadRefCount.Increment();
	}
}

void UAkMediaAsset::DoSetMedia(uint8* LoadedMediaData, int64 MediaDataSize)
{
	auto MediaAssetData = GetMediaAssetData();
	if (!MediaAssetData || MediaAssetData->DataChunks.Num() <= 0)
	{
		return;
	}

	if (Id != AK_INVALID_UNIQUE_ID)
	{
		AkSourceSettings SourceSettings
		{
			Id, reinterpret_cast<AkUInt8*>(LoadedMediaData), static_cast<AkUInt32>(MediaDataSize)
		};

		if (auto AkAudioDevice = FAkAudioDevice::Get())
		{
			if (AkAudioDevice->SetMedia(&SourceSettings, 1) != AK_Success)
			{
				UE_LOG(LogAkAudio, Log, TEXT("SetMedia failed for ID: %u"), Id);
			}
		}
	}
	if (MediaAssetData->IsStreamed)
	{
		FAkUnrealIOHook::AddStreamingMedia(this);
	}
	LoadRefCount.Increment();
	bIsMediaSet = true;
}

void UAkMediaAsset::UnloadMedia()
{
	if (LoadRefCount.GetValue() <= 0 ||
		LoadRefCount.Decrement() > 0 ||
		TryUnloadMedia())
	{
		// Normal exit
		return;
	}

	auto AudioDevice = FAkAudioDevice::Get();
	if (!AudioDevice)
	{
		UE_LOG(LogAkAudio, Warning, TEXT("Failed unloading ID: %u. Resetting."), Id);
		ResetMedia();
		return;
	}

	UE_LOG(LogAkAudio, Warning, TEXT("Failed unloading ID: %u. Trying waiting."), Id);
	bool bMediaUnloaded = false;
	for ( ; !bMediaUnloaded && Leaked >= 0; --Leaked)
	{
		FPlatformProcess::Sleep(0.01);
		AudioDevice->Update(0.0);
		bMediaUnloaded = TryUnloadMedia();
	}

	if (!bMediaUnloaded)
	{
		ForceUnloadMedia();
	}
	Leaked = LeakedInitialCount;
}

bool UAkMediaAsset::TryUnloadMedia()
{
	auto MediaAssetData = GetMediaAssetData();
	if (!MediaAssetData)
	{
		// We are already unloaded
		return true;
	}

	auto AudioDevice = FAkAudioDevice::Get();
	if (!AudioDevice
		|| MediaAssetData->DataChunks.Num() == 0
		|| (MediaAssetData->IsStreamed && !MediaAssetData->DataChunks[0].IsPrefetch))
	{
		// No media to unset. Stop using without unsetting the media.
		ResetMedia();
		return true;
	}

	if (Id != AK_INVALID_UNIQUE_ID)
	{
		AkSourceSettings SourceSettings
		{
			Id, reinterpret_cast<AkUInt8*>(MediaAssetData->LoadedMediaData), static_cast<AkUInt32>(MediaAssetData->DataChunks[0].Data.GetBulkDataSize())
		};
		if (AudioDevice->TryUnsetMedia(&SourceSettings, 1) == AK_ResourceInUse)
		{
			// Resource still in use. Try again later.
			return false;
		}
	}

	// Media was properly unset (or an error occured, in which case we should stop trying)
	ResetMedia();
	return true;
}

void UAkMediaAsset::ForceUnloadMedia()
{
	UE_LOG(LogAkAudio, Log, TEXT("Forcing unset for media ID %u."), Id);
	auto MediaAssetData = GetMediaAssetData();

	auto AudioDevice = FAkAudioDevice::Get();
	AkSourceSettings SourceSettings
	{
		Id, reinterpret_cast<AkUInt8*>(MediaAssetData->LoadedMediaData), static_cast<AkUInt32>(MediaAssetData->DataChunks[0].Data.GetBulkDataSize())
	};

	AudioDevice->UnsetMedia(&SourceSettings, 1);
	ResetMedia();
}

bool UAkMediaAsset::IsReadyForFinishDestroy()
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		return true;
	}

	if (!bIsMediaSet)
	{
		return true;
	}
	
	bool bResult = TryUnloadMedia();
	if (!bResult)
	{
		if (--Leaked == 0)
		{
			ForceUnloadMedia();
			Leaked = LeakedInitialCount;
			return true;
		}
		if (auto* AudioDevice = FAkAudioDevice::Get())
		{
			AudioDevice->Update(0.0);
		}
		else
		{
			Leaked = LeakedInitialCount;
			bResult = true;			// Forcibly close the system
		}
	}
	else
	{
		Leaked = LeakedInitialCount;
	}

	return bResult;
}

void UAkMediaAsset::ResetMedia()
{
	bIsMediaSet = false;
	auto MediaAssetData = GetMediaAssetData();
	if (!MediaAssetData)
	{
		return;
	}

	if (MediaAssetData->IsStreamed)
	{
		FAkUnrealIOHook::RemoveStreamingMedia(this);
	}
	MediaAssetData->Unload();
	LoadRefCount.Set(0);
}

UAkMediaAssetData* UAkMediaAsset::GetMediaAssetData() const
{
#if !WITH_EDITORONLY_DATA
	return CurrentMediaAssetData;
#else
	const FString RunningPlatformName(FPlatformProperties::IniPlatformName());
	if (auto PlatformMediaData = MediaAssetDataPerPlatform.Find(RunningPlatformName))
	{
		return *PlatformMediaData;
	}

	return nullptr;
#endif
}

UAkExternalMediaAsset::UAkExternalMediaAsset()
{
	AutoLoad = false;
}

TTuple<void*, int64> UAkExternalMediaAsset::GetExternalSourceData()
{
	auto MediaAssetData = GetMediaAssetData();

	if (MediaAssetData && MediaAssetData->DataChunks.Num() > 0)
	{
		LoadAndSetMedia(false);
		auto result = MakeTuple(static_cast<void*>(MediaAssetData->LoadedMediaData), MediaAssetData->DataChunks[0].Data.GetBulkDataSize());
		return result;
	}

	return {};
}

void UAkExternalMediaAsset::AddPlayingID(uint32 EventID, uint32 PlayingID)
{
	auto& PlayingIDArray = ActiveEventToPlayingIDMap.FindOrAdd(EventID);
	PlayingIDArray.Add(PlayingID);
}

bool UAkExternalMediaAsset::HasActivePlayingIDs()
{
	if (auto* AudioDevice = FAkAudioDevice::Get())
	{
		for (auto ActiveEventToPlayingIDs : ActiveEventToPlayingIDMap)
		{
			uint32 EventID = ActiveEventToPlayingIDs.Key;
			for (auto PlayingID : ActiveEventToPlayingIDs.Value)
			{
				if (AudioDevice->IsPlayingIDActive(EventID, PlayingID))
				{
					return true;
				}
			}
		}
	}

	return false;
}

void UAkExternalMediaAsset::BeginDestroy()
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		Super::BeginDestroy();
		return;
	}
	if (auto* AudioDevice = FAkAudioDevice::Get())
	{
		for (auto ActiveEventToPlayingIDs : ActiveEventToPlayingIDMap)
		{
			uint32 EventID = ActiveEventToPlayingIDs.Key;
			for (auto PlayingID : ActiveEventToPlayingIDs.Value)
			{
				if (AudioDevice->IsPlayingIDActive(EventID, PlayingID))
				{
					UE_LOG(LogAkAudio, Warning, TEXT("Stopping PlayingID %u because media file %s is being unloaded."), PlayingID, *GetName());
					AudioDevice->StopPlayingID(PlayingID);
				}
			}
		}
	}
	Super::BeginDestroy();
}

bool UAkExternalMediaAsset::IsReadyForFinishDestroy()
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		return Super::IsReadyForFinishDestroy();
	}
	if (HasActivePlayingIDs())
	{
		if (auto* AudioDevice = FAkAudioDevice::Get())
		{
			AudioDevice->Update(0.0);
			return false;
		}
	}
	return Super::IsReadyForFinishDestroy();
}

void UAkExternalMediaAsset::PinInGarbageCollector(uint32 PlayingID)
{
	if (TimesPinnedToGC.GetValue() == 0)
	{
		AddToRoot();
	}
	TimesPinnedToGC.Increment();

	if (auto* AudioDevice = FAkAudioDevice::Get())
	{
		AudioDevice->AddToPinnedMediasMap(PlayingID, this);
	}
}

void UAkExternalMediaAsset::UnpinFromGarbageCollector(uint32 PlayingID)
{
	TimesPinnedToGC.Decrement();
	if (TimesPinnedToGC.GetValue() == 0)
	{
		RemoveFromRoot();
	}
}
