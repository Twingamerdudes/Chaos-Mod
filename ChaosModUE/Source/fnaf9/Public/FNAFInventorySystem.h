#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EFNAFGameType.h"
#include "EInventoryItemSurvivalCategory.h"
#include "FNAFInventoryTableStruct.h"
#include "FNAFMessageTableStruct.h"
#include "OnBadgeLevelUpdatedDelegate.h"
#include "OnInventoryItemAddedDelegate.h"
#include "OnInventoryMessageAddedDelegate.h"
#include "OnSoulCountUpdatedDelegate.h"
#include "SaveHandlerInterface.h"
#include "FNAFInventorySystem.generated.h"

class UDataTable;
class UFNAFSaveData;

UCLASS(Blueprintable)
class FNAF9_API UFNAFInventorySystem : public UGameInstanceSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemAdded OnInventoryItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemAdded OnInventoryItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryMessageAdded OnMessageAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBadgeLevelUpdated OnSecurityLevelUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBadgeLevelUpdated OnPartyLevelUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBadgeLevelUpdated OnPartyPassUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InventoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FazwatchPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FazwatchMaxPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FreddyPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FreddyMaxPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SecurityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CollectedPartyPassCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UsedPartyPassCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumAvailableFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnlimitedFazwatchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnlimitedStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> TapesListenedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDishesBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> CandyCadetStoriesDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSoulCountUpdated OnCautionBotSoulCountUpdated;
    
    UFNAFInventorySystem();
    UFUNCTION(BlueprintCallable)
    bool UsePartyPass();
    
    UFUNCTION(BlueprintCallable)
    void UseFlash(bool& bOutFlashUsed);
    
    UFUNCTION(BlueprintCallable)
    void SetupNewGame();
    
    UFUNCTION(BlueprintCallable)
    void SetupGameMode(EFNAFGameType GameType);
    
    UFUNCTION(BlueprintCallable)
    void SetupDataTable(UDataTable* InDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetSecurityLevel(int32 NewSecurityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerLevel_Freddy(int32 InPowerLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerLevel_Fazwatch(int32 InPowerLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyLevel(int32 NewPartyLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageViewed(FName Message);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPowerLevel_Freddy(int32 NewMax);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPowerLevel_Fazwatch(int32 NewMax);
    
    UFUNCTION(BlueprintCallable)
    void SetItemViewed(FName Item);
    
    UFUNCTION(BlueprintCallable)
    void SetFlashlightStationID(int32 StationID);
    
    UFUNCTION(BlueprintCallable)
    int32 SetCautionBotSoulsCollectedNumber(int32 inNumber);
    
    UFUNCTION(BlueprintCallable)
    void ResetOnExitToMenu();
    
    UFUNCTION(BlueprintCallable)
    void ResetFreddyPower();
    
    UFUNCTION(BlueprintCallable)
    void ResetForChapterSelect(TArray<FName> CollectedItems, int32 chapterSelected);
    
    UFUNCTION(BlueprintCallable)
    void ResetFlashlightPower();
    
    UFUNCTION(BlueprintCallable)
    void ResetFlashes();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMessage(FName Message);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(FName Item);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEverything();
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveCautionBotSouls(int32 NumberOfSouls);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVIPItem(FName Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMessageValid(FName Message) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemValid(FName Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSecurityClearance(int32 InSecurityLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMessageBeenViewed(FName ItemOrMessage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMessage(FName SearchMessage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemBeenViewed(FName ItemOrMessage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItem(FName searchItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughPower_Freddy(int32 PowerRequired) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughPower_Fazwatch(int32 PowerRequired) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailablePartyPass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FName> GetTapesListenedTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaUpgradeMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfUnreadMessages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMessageInfo(FName MessageName, FFNAFMessageTableStruct& OutMessageInfo, bool& OutFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxFlashes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemInfo(FName ItemName, FFNAFInventoryTableStruct& OutItemInfo, bool& OutFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFreddyUpgradeMutliplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreddyMaxPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlashlightUpgradMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlashlightStationID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlashlightMaxPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetCollectedPartyPasses() const;
    
    UFUNCTION(BlueprintCallable)
    float GetChapterProgression(int32 Chapter, UFNAFSaveData* SaveDataObject);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCautionBotSoulsCollectedNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FName> GetCandyCadetStoriesDone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllSurvivalItemsOfType(EInventoryItemSurvivalCategory SurvivalCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllItems() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllCurrentInventoryItems();
    
    UFUNCTION(BlueprintCallable)
    void ClearFlashlightStationID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseFlashBeacon() const;
    
    UFUNCTION(BlueprintCallable)
    void AwardMessage(FName Message, bool bNotify);
    
    UFUNCTION(BlueprintCallable)
    void AwardItem(FName Item, bool bNotify);
    
    UFUNCTION(BlueprintCallable)
    int32 AwardCautionBotSoul();
    
    UFUNCTION(BlueprintCallable)
    bool AdjustPower_Freddy(int32 ChangeAmount);
    
    UFUNCTION(BlueprintCallable)
    bool AdjustPower_Fazwatch(int32 ChangeAmount);
    
    UFUNCTION(BlueprintCallable)
    void AddTapeListenedTo(FName InTapeListenedTo);
    
    UFUNCTION(BlueprintCallable)
    void AddEverything();
    
    UFUNCTION(BlueprintCallable)
    void AddCandyCadetStoryDone(FName InStory);
    
    UFUNCTION(BlueprintCallable)
    int32 AddBrokenPlate();
    
    
    // Fix for true pure virtual functions not being implemented
};

