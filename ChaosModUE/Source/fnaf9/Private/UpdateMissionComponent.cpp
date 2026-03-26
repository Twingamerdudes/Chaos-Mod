#include "UpdateMissionComponent.h"

void UUpdateMissionComponent::UpdateMission() {
}

bool UUpdateMissionComponent::IsMissionFinished() const {
    return false;
}

bool UUpdateMissionComponent::HasMetCondition() const {
    return false;
}

FName UUpdateMissionComponent::GetMissionName() const {
    return NAME_None;
}

UUpdateMissionComponent::UUpdateMissionComponent() {
    this->MissionStateIndex = 0;
    this->bShouldComplete = false;
    this->bShouldSave = false;
}

