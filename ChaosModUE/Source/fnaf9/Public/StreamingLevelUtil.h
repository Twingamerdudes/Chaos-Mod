#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "StreamingLevelUtil.generated.h"

class ALevelStreamingVolume;
class ULevel;
class ULevelStreaming;
class UObject;

UCLASS(Blueprintable)
class FNAF9_API UStreamingLevelUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamingLevelUtil();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamingLevelsAtLocation(const UObject* WorldContextObject, const FVector& WorldLocation, bool bEnableVolumesAfterLoad, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ALevelStreamingVolume*> GetAllStreamingVolumesAtLocation(const UObject* WorldContextObject, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ALevelStreamingVolume*> GetAllStreamingVolumes(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ULevelStreaming*> GetAllStreamingLevelsAtLocation(const UObject* WorldContextObject, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ULevelStreaming*> GetAllStreamingLevels(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ULevel*> GetAllLevels(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnableAllStreamingVolumes(const UObject* WorldContextObject, bool bEnable);
    
};

