#include "ScaledTimeSystem.h"

void UScaledTimeSystem::UpdateScaledTimeDataRows(TMap<FName, FScaledTimeDetails> Rows) {
}

void UScaledTimeSystem::UnpauseCurrentTimer() const {
}

void UScaledTimeSystem::StopCurrentTimer() {
}

bool UScaledTimeSystem::StartTimerSeconds(float Seconds) {
    return false;
}

bool UScaledTimeSystem::StartTimerFromRowName(FName TimerRowName) {
    return false;
}

bool UScaledTimeSystem::StartTimerFromNightNumber(int32 NightNumber) {
    return false;
}

void UScaledTimeSystem::SetupNewGame() const {
}

void UScaledTimeSystem::RestartCurrentTimer() {
}

void UScaledTimeSystem::PauseCurrentTimer() const {
}

void UScaledTimeSystem::OnAntiVirusMoonmanTriggered() {
}

bool UScaledTimeSystem::IsTimerActive() const {
    return false;
}

float UScaledTimeSystem::GetTimeLeftSeconds() const {
    return 0.0f;
}

TMap<FName, FScaledTimeDetails> UScaledTimeSystem::GetScaledTimeDataRows() {
    return TMap<FName, FScaledTimeDetails>();
}

void UScaledTimeSystem::GetIsTimerPaused() const {
}

UScaledTimeSystem::UScaledTimeSystem() {
}

