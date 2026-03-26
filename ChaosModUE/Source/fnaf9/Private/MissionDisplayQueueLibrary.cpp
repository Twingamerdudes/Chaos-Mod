#include "MissionDisplayQueueLibrary.h"

void UMissionDisplayQueueLibrary::PushMissionUpdate(EMissionUpdateType UpdateType, const FName& MissionName, const FFNAFMissionInfo& MissionInfo, const FFNAFMissionState& MissionState) {
}

void UMissionDisplayQueueLibrary::HasMissionUpdateInQueue(EMissionInQueue& MissionInQueue) {
}

FMissionDisplayUpdateInfo UMissionDisplayQueueLibrary::GetNextMissionUpdate() {
    return FMissionDisplayUpdateInfo{};
}

void UMissionDisplayQueueLibrary::ClearMissionUpdateQueue() {
}

UMissionDisplayQueueLibrary::UMissionDisplayQueueLibrary() {
}

