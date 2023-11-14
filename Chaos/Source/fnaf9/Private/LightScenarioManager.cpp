#include "LightScenarioManager.h"

void ULightScenarioManager::UnloadArea() {
}

void ULightScenarioManager::UnbindOnEndScenarioChange(FOnLightScenarioChangeParam Delegate) {
}

void ULightScenarioManager::UnbindOnBeginScenarioChange(FOnLightScenarioChangeParam Delegate) {
}

void ULightScenarioManager::SetInitialScenario(int32 Area, ELightingScenario Scenario) {
}

void ULightScenarioManager::OnUnloadFinished() {
}

void ULightScenarioManager::OnTick() {
}

void ULightScenarioManager::OnPropagate() {
}

void ULightScenarioManager::OnLoadFinished() {
}

void ULightScenarioManager::OnFadeoutFinished() {
}

void ULightScenarioManager::OnChangeAreaUnloadFinished() {
}

void ULightScenarioManager::OnChangeAreaLoadFinished() {
}

bool ULightScenarioManager::IsChangingScenario() const {
    return false;
}

void ULightScenarioManager::GetLightScenarioAreaFromMap(const FName& MapName, ELightScenarioArea& OutArea, ELightingScenario& OutScenario) const {
}

FName ULightScenarioManager::GetLevelNameFromAreaScenario(int32 Area, ELightingScenario Scenario) {
    return NAME_None;
}

ELightingScenario ULightScenarioManager::GetCurrentLightingScenario() const {
    return ELightingScenario::None;
}

int32 ULightScenarioManager::GetCurrentArea() const {
    return 0;
}

void ULightScenarioManager::EndLoadSequence() {
}

void ULightScenarioManager::ChangeScenario(ELightingScenario NewScenario, bool bUseFade) {
}

void ULightScenarioManager::ChangeArea(int32 Area) {
}

void ULightScenarioManager::BindOnEndScenarioChange(FOnLightScenarioChangeParam Delegate) {
}

void ULightScenarioManager::BindOnBeginScenarioChange(FOnLightScenarioChangeParam Delegate) {
}

void ULightScenarioManager::BeginLoadSequence() {
}

ULightScenarioManager::ULightScenarioManager() {
}

