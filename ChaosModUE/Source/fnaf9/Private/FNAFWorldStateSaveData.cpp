#include "FNAFWorldStateSaveData.h"

FFNAFWorldStateSaveData::FFNAFWorldStateSaveData() {
    this->bFreddyInWorld = false;
    this->bCanCallFreddy = false;
    this->bCanEnterExitFreddy = false;
    this->bIsInFreddy = false;
    this->bUseSickFreddy = false;
    this->bPlayerUsedHidingSpace = false;
    this->bCanUsePowerStation = false;
    this->FreddyPatrolPoint = 0;
    this->GameState = EFNAFGameState::Normal;
}

