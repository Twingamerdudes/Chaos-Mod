#include "MissionStateCondition.h"

void UMissionStateCondition::OnMissionUpdated(const FName& InMissionName, const FFNAFMissionState& MissionState, const FFNAFMissionInfo& MissionInfo) {
}

bool UMissionStateCondition::HasMetConditions() const {
    return false;
}

UMissionStateCondition::UMissionStateCondition() {
    this->MissionStatus = EMissionStatus::Active;
    this->MinMissionState = 0;
    this->MaxMissionState = 0;
}

