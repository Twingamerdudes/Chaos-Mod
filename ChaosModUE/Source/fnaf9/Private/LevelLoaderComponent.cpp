#include "LevelLoaderComponent.h"

void ULevelLoaderComponent::UnLoadCurrentScenario() {
}

int32 ULevelLoaderComponent::SetNextLightScenario(int32 Scenario) {
    return 0;
}

TArray<FName> ULevelLoaderComponent::SetLevelsToUnLoad(TArray<FName> UnloadedLevels) {
    return TArray<FName>();
}

TArray<FName> ULevelLoaderComponent::SetLevelsToLoad(TArray<FName> LoadedLevels) {
    return TArray<FName>();
}

void ULevelLoaderComponent::LoadTheNextScenario() {
}

void ULevelLoaderComponent::LoadTheNextArea() {
}

TArray<FName> ULevelLoaderComponent::GetLevelsToLoad() {
    return TArray<FName>();
}

void ULevelLoaderComponent::DebugSkipToNextArea() {
}

ULevelLoaderComponent::ULevelLoaderComponent() {
    this->UnloadScenarioOnly = false;
    this->ChowdaDebuger = NULL;
    this->CurrentLevel = NULL;
    this->LightingMap = NULL;
    this->LightScenarioManager = NULL;
    this->NextLightScenario = 0;
    this->LoadCount = 0;
    this->UnloadCount = 0;
    this->OldLevelsAreUnLoaded = false;
    this->NextLevelsAreVisible = false;
}

