#include "WorldStateSystem.h"

void UWorldStateSystem::StartMinigame(const FString& MinigameName, EFNAFGameState GameState, AActor* MinigameActor) {
}

void UWorldStateSystem::SetWorldState(EFNAFGameState NewState) {
}

void UWorldStateSystem::SetupNewGame() {
}

void UWorldStateSystem::SetSurvivalMaxDeaths(int32 MaxDeaths) {
}

void UWorldStateSystem::SetSurvivalDifficulty(ESurvivalDifficulty Difficulty) {
}

void UWorldStateSystem::SetRuinAIState(const FFNAFRuinAISaveData& InRuinAIState) {
}

void UWorldStateSystem::SetRandomSeed(int32 Seed) {
}

void UWorldStateSystem::SetPowerStationAvailable(bool bAvailable) {
}

void UWorldStateSystem::SetPlayerInPowerStation(int32 InPowerStationID) {
}

void UWorldStateSystem::SetPlayerInFreddy(bool bInFreddy) {
}

void UWorldStateSystem::SetPlayerHasUsedHidingSpot() {
}

void UWorldStateSystem::SetMazercisePanel(int32 Index, const FString& Location) {
}

void UWorldStateSystem::SetInstructionCardShown(bool Shown) {
}

void UWorldStateSystem::SetGoalPathName(FName inGoalPathName) {
}

void UWorldStateSystem::SetFreddySick(bool bIsSick) {
}

void UWorldStateSystem::SetFreddyPatrolPoint(int32 PatrolPointIndex) {
}

void UWorldStateSystem::SetDeactivatedCautionBot_Map(TMap<int32, bool> In_DeactivatedCautionBots_Map) {
}

void UWorldStateSystem::SetCurrentActivityId(const FString& InActivityId) {
}

void UWorldStateSystem::SetCanShowInstructionCards(bool bCanShowInstructionCards) {
}

void UWorldStateSystem::SetCanEnterExitFreddy(bool bCanEnterExit) {
}

void UWorldStateSystem::SetCanCallFreddy(bool bCanCall) {
}

void UWorldStateSystem::SetArcadeState(const FArcadeSaveData& InArcadeState) {
}

void UWorldStateSystem::SetAIState(const FFNAFAISaveData& InAIState) {
}

void UWorldStateSystem::ResetForChapterSelect(TArray<FName> chapterActivatables, TArray<FName> activatablesToKeepOnReplay, int32 chapterSelected) {
}

void UWorldStateSystem::RemoveDeactivatedCautionBot(int32 CautionBotID, bool isDeactivated) {
}

void UWorldStateSystem::RemoveBonnieBowlMMMJumpscareSaveID(FName inSaveID) {
}

void UWorldStateSystem::RemoveActivated(FName ActivatableName) {
}

bool UWorldStateSystem::IsPowerStationAvailable() const {
    return false;
}

bool UWorldStateSystem::IsPlayerInFreddy() const {
    return false;
}

bool UWorldStateSystem::IsInstructionCardShown() const {
    return false;
}

bool UWorldStateSystem::IsFreddySick() const {
    return false;
}

bool UWorldStateSystem::IsActivated(FName ActivatableName) const {
    return false;
}

bool UWorldStateSystem::HasPlayerUsedHidingSpot() const {
    return false;
}

EFNAFGameState UWorldStateSystem::GetWorldState() const {
    return EFNAFGameState::Normal;
}

int32 UWorldStateSystem::GetSurvivalMaxDeaths() const {
    return 0;
}

ESurvivalDifficulty UWorldStateSystem::GetSurvivalDifficulty() const {
    return ESurvivalDifficulty::Easy;
}

void UWorldStateSystem::GetSavedPlayerLocationAndRotation(FVector& OutWorldLocation, FRotator& OutWorldRotation) const {
}

void UWorldStateSystem::GetSavedFreddyLocationAndRotation(bool& OutFreddyInWorld, FVector& OutWorldLocation, FRotator& OutWorldRotation) const {
}

FFNAFRuinAISaveData UWorldStateSystem::GetRuinAIState() const {
    return FFNAFRuinAISaveData{};
}

int32 UWorldStateSystem::GetRandomSeed() const {
    return 0;
}

void UWorldStateSystem::GetPowerStationInfo(bool& OutPlayerInPowerStation, int32& OutPowerStationID) const {
}

FString UWorldStateSystem::GetMazercisePanel(int32 Index) {
    return TEXT("");
}

int32 UWorldStateSystem::GetLivesRemaining() const {
    return 0;
}

FName UWorldStateSystem::GetGoalPathName() {
    return NAME_None;
}

AFNAFBasePlayerCharacter* UWorldStateSystem::GetFreddyPawn() const {
    return NULL;
}

int32 UWorldStateSystem::GetFreddyPatrolPoint() const {
    return 0;
}

TMap<int32, bool> UWorldStateSystem::GetDeactivatedCautionBots_Map() {
    return TMap<int32, bool>();
}

int32 UWorldStateSystem::GetCurrentSpottedCount() const {
    return 0;
}

AActor* UWorldStateSystem::GetCurrentMinigameActor() const {
    return NULL;
}

FString UWorldStateSystem::GetCurrentMinigame() const {
    return TEXT("");
}

int32 UWorldStateSystem::GetCurrentDeathCount() const {
    return 0;
}

FString UWorldStateSystem::GetCurrentActivityId() const {
    return TEXT("");
}

TSet<FName> UWorldStateSystem::GetBonnieBowlMMMJumspscareData() {
    return TSet<FName>();
}

FArcadeSaveData UWorldStateSystem::GetArcadeState() const {
    return FArcadeSaveData{};
}

TArray<FName> UWorldStateSystem::GetAllCurrentActivables() {
    return TArray<FName>();
}

FFNAFAISaveData UWorldStateSystem::GetAIState() const {
    return FFNAFAISaveData{};
}

void UWorldStateSystem::EndMinigame() {
}

void UWorldStateSystem::DebugSetPlayerHasUsedHidingSpot(bool HasHid) {
}

void UWorldStateSystem::ClearPlayerInPowerStation() {
}

void UWorldStateSystem::CanStartMinigame(bool& CanStart, ECantStartMinigameReason& reason) const {
}

bool UWorldStateSystem::CanShowInstructionCards() const {
    return false;
}

bool UWorldStateSystem::CanEnterExitFreddy() const {
    return false;
}

bool UWorldStateSystem::CanCallFreddy() const {
    return false;
}

void UWorldStateSystem::AddSpotted() {
}

void UWorldStateSystem::AddDeath(int32& OutRemainingLives) {
}

void UWorldStateSystem::AddDeactivatedCautionBot(int32 CautionBotID, bool isDeactivated) {
}

void UWorldStateSystem::AddBonnieBowlMMMJumpscareSaveID(FName inSaveID) {
}

void UWorldStateSystem::AddActivated(FName ActivatableName) {
}

UWorldStateSystem::UWorldStateSystem() {
    this->WorldState = EFNAFGameState::Normal;
    this->CurrentMinigameActor = NULL;
    this->SurvivalDifficulty = ESurvivalDifficulty::Easy;
}

