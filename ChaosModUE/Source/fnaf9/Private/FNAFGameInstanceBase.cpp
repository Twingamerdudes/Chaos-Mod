#include "FNAFGameInstanceBase.h"

void UFNAFGameInstanceBase::StartGamePlay(EFNAFGameType GameType) {
}

void UFNAFGameInstanceBase::SetVisualQualityLevel(int32 Level) {
}

void UFNAFGameInstanceBase::SetSplashFinished(bool bFinished) {
}

void UFNAFGameInstanceBase::SetRayTraceQualityLevel(int32 Level) {
}

void UFNAFGameInstanceBase::SetPresenceForLocalPlayers(const FString& StatusStr, const FString& PresenceData) {
}

void UFNAFGameInstanceBase::SetIsOnLoadingScreen(bool bOnLoadingScreen) {
}

void UFNAFGameInstanceBase::SetIsFromTitleForChowda(bool In_FromTitle) {
}

void UFNAFGameInstanceBase::SetAllPlayersFocusToViewport() {
}

void UFNAFGameInstanceBase::ProcessActivityIntent() {
}





void UFNAFGameInstanceBase::OnGameActivityLoadComplete() {
}


void UFNAFGameInstanceBase::OnApplicationReactivated() {
}

void UFNAFGameInstanceBase::OnApplicationDeactivated() {
}

void UFNAFGameInstanceBase::LogGameClockDelegates() {
}

void UFNAFGameInstanceBase::LoadGameTips(EFNAFGameType GameType) {
}

bool UFNAFGameInstanceBase::IsOnLoadingScreen() const {
    return false;
}

bool UFNAFGameInstanceBase::IsNormalPlay() const {
    return false;
}

bool UFNAFGameInstanceBase::IsLoadingActivity() {
    return false;
}

bool UFNAFGameInstanceBase::IsFromTitle() const {
    return false;
}

bool UFNAFGameInstanceBase::HasSplashFinished() const {
    return false;
}

int32 UFNAFGameInstanceBase::GetVisualQualityLevel() {
    return 0;
}

int32 UFNAFGameInstanceBase::GetRayTraceQualityLevel() {
    return 0;
}

FString UFNAFGameInstanceBase::GetPlayerName() {
    return TEXT("");
}

int32 UFNAFGameInstanceBase::GetPlayerControllerID() {
    return 0;
}

bool UFNAFGameInstanceBase::GetIsShippingConfig() {
    return false;
}

float UFNAFGameInstanceBase::GetGPUBenchmarkResult() {
    return 0.0f;
}

FText UFNAFGameInstanceBase::GetGameTipTextByIndexDLC(int32 Index) {
    return FText::GetEmpty();
}

FText UFNAFGameInstanceBase::GetGameTipTextByIndex(int32 Index) {
    return FText::GetEmpty();
}

EFNAFGameType UFNAFGameInstanceBase::GetCurrentGameType() const {
    return EFNAFGameType::Normal;
}

float UFNAFGameInstanceBase::GetCPUBenchmarkResult() {
    return 0.0f;
}

FString UFNAFGameInstanceBase::GetAllLoadedLevelsString() const {
    return TEXT("");
}

void UFNAFGameInstanceBase::EndLoadingScreenDLC() {
}

void UFNAFGameInstanceBase::EndLoadingScreen() {
}

void UFNAFGameInstanceBase::CheckForPlayerLoginChanged() {
}

void UFNAFGameInstanceBase::ChangeLocalPlayerController(int32 UserId) {
}

void UFNAFGameInstanceBase::BeginLoadingScreenDLC() {
}

void UFNAFGameInstanceBase::BeginLoadingScreen() {
}

UFNAFGameInstanceBase::UFNAFGameInstanceBase() {
}

