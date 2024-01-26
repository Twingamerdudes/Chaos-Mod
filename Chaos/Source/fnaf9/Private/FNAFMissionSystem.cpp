#include "FNAFMissionSystem.h"

void UFNAFMissionSystem::SetupNewGame() {
}

void UFNAFMissionSystem::SetMissionInfoState(const FName& MissionName, int32 InfoState) {
}

void UFNAFMissionSystem::RemoveActiveMission(const FName& MissionName) {
}

void UFNAFMissionSystem::NotifyMissionUpdate(const FName& MissionName) {
}

bool UFNAFMissionSystem::IsValidMission(const FName& MissionName) const {
    return false;
}

bool UFNAFMissionSystem::IsMissionActiveOrCompleted(const FName& MissionName) const {
    return false;
}

bool UFNAFMissionSystem::IsInSurvivalMode() const {
    return false;
}

bool UFNAFMissionSystem::IsCompletedMission(const FName& MissionName) const {
    return false;
}

bool UFNAFMissionSystem::IsActiveMission(const FName& MissionName) const {
    return false;
}

TArray<FFNAFMissionState> UFNAFMissionSystem::GetTrackedMissions() const {
    return TArray<FFNAFMissionState>();
}

UDataTable* UFNAFMissionSystem::GetTaskTable() const {
    return NULL;
}

void UFNAFMissionSystem::GetTaskInfo(const FName& TaskName, FFNAFMissionTaskInfo& OutMissionTaskInfo, bool& OutValidTask) const {
}

void UFNAFMissionSystem::GetTaskByIndex(const FName& MissionName, int32 TaskIndex, FFNAFMissionTaskInfo& OutMissionTaskInfo, bool& OutValidTask) const {
}

UDataTable* UFNAFMissionSystem::GetMissionTable() const {
    return NULL;
}

void UFNAFMissionSystem::GetMissionState(const FName& MissionName, FFNAFMissionState& OutMissionState, bool& OutValidMission) const {
}

void UFNAFMissionSystem::GetMissionInfo(const FName& MissionName, FFNAFMissionInfo& OutMissionInfo, bool& OutValidMission) const {
}

void UFNAFMissionSystem::GetMissionFromTask(const FName& TaskName, FFNAFMissionInfo& OutMissionInfo, bool& OutValidMission) const {
}

void UFNAFMissionSystem::GetMissionFromMessage(const FName& MessageName, FName& OutMissionName, int32& OutMissionStateIndex) const {
}

TArray<AMissionMarker*> UFNAFMissionSystem::GetMarkersForMission(const FName& MissionName, int32 MissionStateIndex) const {
    return TArray<AMissionMarker*>();
}

TArray<FFNAFMissionState> UFNAFMissionSystem::GetCompletedMissions() const {
    return TArray<FFNAFMissionState>();
}

void UFNAFMissionSystem::GetAreaMarkerCounts(TMap<ELevelArea, int32>& MapOfCounts) const {
}

TArray<FName> UFNAFMissionSystem::GetAllMissionNames() const {
    return TArray<FName>();
}

TArray<AMissionMarker*> UFNAFMissionSystem::GetAllMissionMarkers() const {
    return TArray<AMissionMarker*>();
}

TArray<AMissionMarker*> UFNAFMissionSystem::GetAllCurrentMarkers() const {
    return TArray<AMissionMarker*>();
}

TArray<FFNAFMissionState> UFNAFMissionSystem::GetActiveMissions() const {
    return TArray<FFNAFMissionState>();
}

void UFNAFMissionSystem::CompleteMissionTask(const FName& MissionName, int32 TaskIndex) {
}

void UFNAFMissionSystem::CompleteMission(const FName& MissionName) {
}

void UFNAFMissionSystem::BranchMissionStatus(const FName& MissionName, EMissionStatus& Status) {
}

void UFNAFMissionSystem::AddActiveMission(const FName& MissionName) {
}

UFNAFMissionSystem::UFNAFMissionSystem() {
}

