#include "StreamingLevelUtil.h"

void UStreamingLevelUtil::LoadStreamingLevelsAtLocation(const UObject* WorldContextObject, const FVector& WorldLocation, bool bEnableVolumesAfterLoad, FLatentActionInfo LatentInfo) {
}

TArray<ALevelStreamingVolume*> UStreamingLevelUtil::GetAllStreamingVolumesAtLocation(const UObject* WorldContextObject, const FVector& WorldLocation) {
    return TArray<ALevelStreamingVolume*>();
}

TArray<ALevelStreamingVolume*> UStreamingLevelUtil::GetAllStreamingVolumes(const UObject* WorldContextObject) {
    return TArray<ALevelStreamingVolume*>();
}

TArray<ULevelStreaming*> UStreamingLevelUtil::GetAllStreamingLevelsAtLocation(const UObject* WorldContextObject, const FVector& WorldLocation) {
    return TArray<ULevelStreaming*>();
}

TArray<ULevelStreaming*> UStreamingLevelUtil::GetAllStreamingLevels(const UObject* WorldContextObject) {
    return TArray<ULevelStreaming*>();
}

TArray<ULevel*> UStreamingLevelUtil::GetAllLevels(const UObject* WorldContextObject) {
    return TArray<ULevel*>();
}

void UStreamingLevelUtil::EnableAllStreamingVolumes(const UObject* WorldContextObject, bool bEnable) {
}

UStreamingLevelUtil::UStreamingLevelUtil() {
}

