#include "FNAFSaveGameSystem.h"

void UFNAFSaveGameSystem::ToggleDLCCallToAction(bool visible) {
}

void UFNAFSaveGameSystem::ShowAutoSaveIcon() {
}

void UFNAFSaveGameSystem::SetUserIndex(int32 NewUserIndex) {
}

void UFNAFSaveGameSystem::SetUseAutosaveMapArea(bool UseMapArea) {
}

void UFNAFSaveGameSystem::SetupPIE() {
}

void UFNAFSaveGameSystem::SetupNewGameOnSlot(const FString& originalSlotName) {
}

void UFNAFSaveGameSystem::SetupNewGame() {
}

void UFNAFSaveGameSystem::SetupNewChowdaGame(int32 ProfileIndexIn) {
}

void UFNAFSaveGameSystem::SetLoadIntoChapter(bool Load) {
}

void UFNAFSaveGameSystem::SetIsSavingAllowed(bool NewIsSavingAllowed) {
}

void UFNAFSaveGameSystem::SetInChapterReplay(bool inReplay, int32 Chapter) {
}

void UFNAFSaveGameSystem::SetChowdaProfileIndex(int32 profileIndex) {
}

void UFNAFSaveGameSystem::SaveCurrentGame() {
}

void UFNAFSaveGameSystem::SaveCheckpoint() {
}

void UFNAFSaveGameSystem::SaveArcade() {
}

void UFNAFSaveGameSystem::Reset_SaveSlots() {
}

void UFNAFSaveGameSystem::Rename_SaveSlot(const FString& originalSlotName, const FString& renamedSlotName) {
}

void UFNAFSaveGameSystem::RemoveAutoSaveIcon() {
}

bool UFNAFSaveGameSystem::PreviousSaveIsAuto() {
    return false;
}

void UFNAFSaveGameSystem::LoadWorldTransitSave() {
}

UFNAFSaveData* UFNAFSaveGameSystem::LoadSaveSlotData(const FString& SlotName) {
    return NULL;
}

void UFNAFSaveGameSystem::LoadMasterSave() {
}

UFNAFSaveData* UFNAFSaveGameSystem::LoadChowdaAutoSaveData(int32 ProfileIndexIn) {
    return NULL;
}

void UFNAFSaveGameSystem::LoadChowdaAutoSave(int32 ProfileIndexIn) {
}

void UFNAFSaveGameSystem::LoadCheckpoint() {
}

void UFNAFSaveGameSystem::LoadAutoSave() {
}

void UFNAFSaveGameSystem::LoadActivitySave(const FString& InActivityId) {
}

bool UFNAFSaveGameSystem::IsSavingAllowed() const {
    return false;
}

bool UFNAFSaveGameSystem::IsInChapterReplay() {
    return false;
}

bool UFNAFSaveGameSystem::HasSaveData() const {
    return false;
}

bool UFNAFSaveGameSystem::HasPreviousSave() {
    return false;
}

bool UFNAFSaveGameSystem::HasChowdaSaveGame(int32 ProfileIndexIn) {
    return false;
}

bool UFNAFSaveGameSystem::HasAutoSave() {
    return false;
}

bool UFNAFSaveGameSystem::HasActivitySave(const FString& InActivityId) {
    return false;
}

int32 UFNAFSaveGameSystem::GetUserIndex() {
    return 0;
}

bool UFNAFSaveGameSystem::GetUseAutosaveMapArea() {
    return false;
}

EMapArea UFNAFSaveGameSystem::GetMapAreaToLoad() {
    return EMapArea::Lobby;
}

bool UFNAFSaveGameSystem::GetLoadIntoChapter() {
    return false;
}

EMapArea UFNAFSaveGameSystem::GetLastSavedMapArea() {
    return EMapArea::Lobby;
}

int32 UFNAFSaveGameSystem::GetLastSavedChapter() {
    return 0;
}

FString UFNAFSaveGameSystem::GetLastLoadedChowdaSlotName() {
    return TEXT("");
}

int32 UFNAFSaveGameSystem::GetGameIteration() const {
    return 0;
}

int32 UFNAFSaveGameSystem::GetCurrentChapter() {
    return 0;
}

int32 UFNAFSaveGameSystem::GetChowdaProfileIndex() {
    return 0;
}

void UFNAFSaveGameSystem::Get_SaveSlotNameData(TMap<FString, FString>& SaveSlots_Map) {
}

void UFNAFSaveGameSystem::Get_ChowdaSaveSlotNameData(TMap<FString, FString>& SaveSlots_Map) {
}

void UFNAFSaveGameSystem::FinalizeCheckpoint() {
}

bool UFNAFSaveGameSystem::DLCCallToActionVisibility() {
    return false;
}

void UFNAFSaveGameSystem::DeleteSaveGameByName(const FString& SlotName) {
}

void UFNAFSaveGameSystem::DeleteSavedGame_BySlot(int32 saveSlotNumber) {
}

void UFNAFSaveGameSystem::DeleteChowdaSaveGameByName(const FString& SlotName) {
}

void UFNAFSaveGameSystem::CreateWorldTransitSave() {
}

void UFNAFSaveGameSystem::CreatePotentialCheckpoint() {
}

void UFNAFSaveGameSystem::ClearChowdaAutoSaves() {
}

void UFNAFSaveGameSystem::ChowdaAutoSave(int32 Chapter, EMapArea MapAreaToSave, FName SaveID) {
}

void UFNAFSaveGameSystem::AutoSave() {
}

void UFNAFSaveGameSystem::AsyncSaveGame(const FString& originalSlotName, bool isANewSlot, bool isCurrentSlot, const FString& Renamed_SaveSlot, FString& internal_SlotName) {
}

void UFNAFSaveGameSystem::AsyncLoadGameLastLoaded() {
}

void UFNAFSaveGameSystem::AsyncLoadGame(const FString& originalSlotName, bool isContinueSelected, FString& internal_SlotName) {
}

void UFNAFSaveGameSystem::AsyncLoadChowdaLastLoaded() {
}

UFNAFSaveGameSystem::UFNAFSaveGameSystem() {
    this->SaveDataObject = NULL;
    this->TempSaveDataObject = NULL;
    this->WorldTransitDataObject = NULL;
    this->MasterDataSlotName = TEXT("MasterDataSlot");
    this->SaveSlotName = TEXT("SaveGameSlot0");
    this->UserIndex = 0;
    this->ChowdaProfileIndex = 0;
    this->bIsSavingAllowed = true;
    this->bInvertedGamepad = false;
    this->MaxChowdaSaveSlots = 3;
}

