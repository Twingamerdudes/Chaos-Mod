#include "LevelLoadSubsystem.h"

void ULevelLoadSubsystem::LoadTheNextArea(EMapArea MapArea) {
}

bool ULevelLoadSubsystem::IsTickable() const {
    return false;
}

TArray<FName> ULevelLoadSubsystem::GetVisibleLevels() {
    return TArray<FName>();
}

EMapArea ULevelLoadSubsystem::GetCurrentMapArea() {
    return EMapArea::Lobby;
}

ULevelLoadSubsystem::ULevelLoadSubsystem() {
    this->CurrentLevel = NULL;
    this->LightScenario = 0;
    this->LoadCount = 0;
    this->UnloadCount = 0;
    this->OldLevelsAreUnLoaded = false;
    this->NextLevelsAreVisible = false;
    this->CanTick = false;
}

