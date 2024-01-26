#include "FNAFInventorySystem.h"

bool UFNAFInventorySystem::UsePartyPass() {
    return false;
}

void UFNAFInventorySystem::UseFlash(bool& bOutFlashUsed) {
}

void UFNAFInventorySystem::SetupNewGame() {
}

void UFNAFInventorySystem::SetupGameMode(EFNAFGameType GameType) {
}

void UFNAFInventorySystem::SetupDataTable(UDataTable* InDataTable) {
}

void UFNAFInventorySystem::SetSecurityLevel(int32 NewSecurityLevel) {
}

void UFNAFInventorySystem::SetPowerLevel_Freddy(int32 InPowerLevel) {
}

void UFNAFInventorySystem::SetPowerLevel_Fazwatch(int32 InPowerLevel) {
}

void UFNAFInventorySystem::SetPartyLevel(int32 NewPartyLevel) {
}

void UFNAFInventorySystem::SetMessageViewed(FName Message) {
}

void UFNAFInventorySystem::SetMaxPowerLevel_Freddy(int32 NewMax) {
}

void UFNAFInventorySystem::SetMaxPowerLevel_Fazwatch(int32 NewMax) {
}

void UFNAFInventorySystem::SetItemViewed(FName Item) {
}

void UFNAFInventorySystem::SetFlashlightStationID(int32 StationID) {
}

int32 UFNAFInventorySystem::SetCautionBotSoulsCollectedNumber(int32 inNumber) {
    return 0;
}

void UFNAFInventorySystem::ResetOnExitToMenu() {
}

void UFNAFInventorySystem::ResetFreddyPower() {
}

void UFNAFInventorySystem::ResetForChapterSelect(TArray<FName> CollectedItems, int32 chapterSelected) {
}

void UFNAFInventorySystem::ResetFlashlightPower() {
}

void UFNAFInventorySystem::ResetFlashes() {
}

void UFNAFInventorySystem::RemoveMessage(FName Message) {
}

void UFNAFInventorySystem::RemoveItem(FName Item) {
}

void UFNAFInventorySystem::RemoveEverything() {
}

int32 UFNAFInventorySystem::RemoveCautionBotSouls(int32 NumberOfSouls) {
    return 0;
}

bool UFNAFInventorySystem::IsVIPItem(FName Item) const {
    return false;
}

bool UFNAFInventorySystem::IsMessageValid(FName Message) const {
    return false;
}

bool UFNAFInventorySystem::IsItemValid(FName Item) const {
    return false;
}

bool UFNAFInventorySystem::HasSecurityClearance(int32 InSecurityLevel) const {
    return false;
}

bool UFNAFInventorySystem::HasMessageBeenViewed(FName ItemOrMessage) const {
    return false;
}

bool UFNAFInventorySystem::HasMessage(FName SearchMessage) const {
    return false;
}

bool UFNAFInventorySystem::HasItemBeenViewed(FName ItemOrMessage) const {
    return false;
}

bool UFNAFInventorySystem::HasItem(FName searchItem) const {
    return false;
}

bool UFNAFInventorySystem::HasEnoughPower_Freddy(int32 PowerRequired) const {
    return false;
}

bool UFNAFInventorySystem::HasEnoughPower_Fazwatch(int32 PowerRequired) const {
    return false;
}

bool UFNAFInventorySystem::HasAvailablePartyPass() const {
    return false;
}

TSet<FName> UFNAFInventorySystem::GetTapesListenedTo() const {
    return TSet<FName>();
}

float UFNAFInventorySystem::GetStaminaUpgradeMultiplier() const {
    return 0.0f;
}

int32 UFNAFInventorySystem::GetNumberOfUnreadMessages() const {
    return 0;
}

void UFNAFInventorySystem::GetMessageInfo(FName MessageName, FFNAFMessageTableStruct& OutMessageInfo, bool& OutFound) const {
}

int32 UFNAFInventorySystem::GetMaxFlashes() const {
    return 0;
}

void UFNAFInventorySystem::GetItemInfo(FName ItemName, FFNAFInventoryTableStruct& OutItemInfo, bool& OutFound) const {
}

float UFNAFInventorySystem::GetFreddyUpgradeMutliplier() const {
    return 0.0f;
}

int32 UFNAFInventorySystem::GetFreddyMaxPower() const {
    return 0;
}

float UFNAFInventorySystem::GetFlashlightUpgradMultiplier() const {
    return 0.0f;
}

int32 UFNAFInventorySystem::GetFlashlightStationID() const {
    return 0;
}

int32 UFNAFInventorySystem::GetFlashlightMaxPower() const {
    return 0;
}

TArray<FName> UFNAFInventorySystem::GetCollectedPartyPasses() const {
    return TArray<FName>();
}

float UFNAFInventorySystem::GetChapterProgression(int32 Chapter, UFNAFSaveData* SaveDataObject) {
    return 0.0f;
}

int32 UFNAFInventorySystem::GetCautionBotSoulsCollectedNumber() {
    return 0;
}

TSet<FName> UFNAFInventorySystem::GetCandyCadetStoriesDone() const {
    return TSet<FName>();
}

TArray<FName> UFNAFInventorySystem::GetAllSurvivalItemsOfType(EInventoryItemSurvivalCategory SurvivalCategory) const {
    return TArray<FName>();
}

TArray<FName> UFNAFInventorySystem::GetAllItems() const {
    return TArray<FName>();
}

TArray<FName> UFNAFInventorySystem::GetAllCurrentInventoryItems() {
    return TArray<FName>();
}

void UFNAFInventorySystem::ClearFlashlightStationID() {
}

bool UFNAFInventorySystem::CanUseFlashBeacon() const {
    return false;
}

void UFNAFInventorySystem::AwardMessage(FName Message, bool bNotify) {
}

void UFNAFInventorySystem::AwardItem(FName Item, bool bNotify) {
}

int32 UFNAFInventorySystem::AwardCautionBotSoul() {
    return 0;
}

bool UFNAFInventorySystem::AdjustPower_Freddy(int32 ChangeAmount) {
    return false;
}

bool UFNAFInventorySystem::AdjustPower_Fazwatch(int32 ChangeAmount) {
    return false;
}

void UFNAFInventorySystem::AddTapeListenedTo(FName InTapeListenedTo) {
}

void UFNAFInventorySystem::AddEverything() {
}

void UFNAFInventorySystem::AddCandyCadetStoryDone(FName InStory) {
}

int32 UFNAFInventorySystem::AddBrokenPlate() {
    return 0;
}

UFNAFInventorySystem::UFNAFInventorySystem() {
    this->FazwatchPowerLevel = 300;
    this->FazwatchMaxPowerLevel = 300;
    this->FreddyPowerLevel = 100;
    this->FreddyMaxPowerLevel = 100;
    this->SecurityLevel = 0;
    this->CollectedPartyPassCount = 0;
    this->UsedPartyPassCount = 0;
    this->NumAvailableFlash = 0;
    this->bUnlimitedFazwatchPower = false;
    this->bUnlimitedStamina = false;
    this->NumDishesBroken = 0;
}

