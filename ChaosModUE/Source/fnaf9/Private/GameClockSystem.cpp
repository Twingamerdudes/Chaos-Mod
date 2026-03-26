#include "GameClockSystem.h"

void UGameClockSystem::StartNextHour() {
}

void UGameClockSystem::SetGameTimeEvent(FOnTimeReachedDynamicDelegate Delegate, int32 Hour, int32 Minute) {
}

void UGameClockSystem::SetGameEndEvent(FOnTimeReachedDynamicDelegate Delegate) {
}

void UGameClockSystem::SetCurrentTime(int32 Hour, int32 Minute, bool bPlayDelegates) {
}

void UGameClockSystem::SetCurrentMinute(int32 Minute) {
}

void UGameClockSystem::SetCurrentHour(int32 Hour) {
}

void UGameClockSystem::SetClockRunning(bool bRunClock) {
}

void UGameClockSystem::SetClockRateInMinutesPerHour(int32 MinutesPerHour) {
}

void UGameClockSystem::SetClockRate(int32 TotalRealHours) {
}

void UGameClockSystem::ResetTimeDelegatesUpTo(int32 Hour, int32 Minute) {
}

void UGameClockSystem::OnNormalModeTriggered() {
}

void UGameClockSystem::OnMoonmanLiteTriggered() {
}

void UGameClockSystem::OnMoonmanIntermediateTriggered() {
}

void UGameClockSystem::OnMoonmanDangerTriggered() {
}

bool UGameClockSystem::IsClockRunning() const {
    return false;
}

float UGameClockSystem::GetCurrentTimeInSeconds() const {
    return 0.0f;
}

void UGameClockSystem::GetCurrentTime(int32& Hour, int32& Minute) const {
}

UGameClockSystem::UGameClockSystem() {
}

