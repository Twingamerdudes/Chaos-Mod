#include "DoorEntryRequirements.h"

FDoorEntryRequirements::FDoorEntryRequirements() {
    this->RequiredSecurityLevel = 0;
    this->ConditionDirection = EDoorSide::Both;
    this->bInitiallyLockedPlayer = false;
    this->bInitiallyLockedAI = false;
    this->bStartOpen = false;
    this->bIsAutomaticDoorForPlayer = false;
    this->bIsAutomaticDoorForAI = false;
    this->bCanCloseDoorForAI = false;
}

