#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ArcadeSaveData.h"
#include "ECantStartMinigameReason.h"
#include "EFNAFGameState.h"
#include "ESurvivalDifficulty.h"
#include "FNAFAISaveData.h"
#include "FNAFRuinAISaveData.h"
#include "FreddyUpgradeState.h"
#include "OnWorldObjectStateChangedDelegate.h"
#include "OnWorldStateChangedDelegate.h"
#include "SaveHandlerInterface.h"
#include "WorldStateSystem.generated.h"

class AActor;
class AFNAFBasePlayerCharacter;

UCLASS(Blueprintable)
class FNAF9_API UWorldStateSystem : public UGameInstanceSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldStateChanged OnWorldStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldObjectStateChanged OnObjectStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFreddyUpgradeState FreddyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream SeededRandomStream;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFNAFGameState WorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> ActivatedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFNAFAISaveData AIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFNAFRuinAISaveData RuinAIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FArcadeSaveData ArcadeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentMinigameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentMinigameActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> MazercisePanelLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESurvivalDifficulty SurvivalDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentActivityId;
    
public:
    UWorldStateSystem();
    UFUNCTION(BlueprintCallable)
    void StartMinigame(const FString& MinigameName, EFNAFGameState GameState, AActor* MinigameActor);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldState(EFNAFGameState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetupNewGame();
    
    UFUNCTION(BlueprintCallable)
    void SetSurvivalMaxDeaths(int32 MaxDeaths);
    
    UFUNCTION(BlueprintCallable)
    void SetSurvivalDifficulty(ESurvivalDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetRuinAIState(const FFNAFRuinAISaveData& InRuinAIState);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerStationAvailable(bool bAvailable);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerInPowerStation(int32 InPowerStationID);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerInFreddy(bool bInFreddy);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerHasUsedHidingSpot();
    
    UFUNCTION(BlueprintCallable)
    void SetMazercisePanel(int32 Index, const FString& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetInstructionCardShown(bool Shown);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalPathName(FName inGoalPathName);
    
    UFUNCTION(BlueprintCallable)
    void SetFreddySick(bool bIsSick);
    
    UFUNCTION(BlueprintCallable)
    void SetFreddyPatrolPoint(int32 PatrolPointIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDeactivatedCautionBot_Map(TMap<int32, bool> In_DeactivatedCautionBots_Map);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentActivityId(const FString& InActivityId);
    
    UFUNCTION(BlueprintCallable)
    void SetCanShowInstructionCards(bool bCanShowInstructionCards);
    
    UFUNCTION(BlueprintCallable)
    void SetCanEnterExitFreddy(bool bCanEnterExit);
    
    UFUNCTION(BlueprintCallable)
    void SetCanCallFreddy(bool bCanCall);
    
    UFUNCTION(BlueprintCallable)
    void SetArcadeState(const FArcadeSaveData& InArcadeState);
    
    UFUNCTION(BlueprintCallable)
    void SetAIState(const FFNAFAISaveData& InAIState);
    
    UFUNCTION(BlueprintCallable)
    void ResetForChapterSelect(TArray<FName> chapterActivatables, TArray<FName> activatablesToKeepOnReplay, int32 chapterSelected);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDeactivatedCautionBot(int32 CautionBotID, bool isDeactivated);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBonnieBowlMMMJumpscareSaveID(FName inSaveID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActivated(FName ActivatableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerStationAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInFreddy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstructionCardShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreddySick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated(FName ActivatableName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayerUsedHidingSpot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFNAFGameState GetWorldState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSurvivalMaxDeaths() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESurvivalDifficulty GetSurvivalDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSavedPlayerLocationAndRotation(FVector& OutWorldLocation, FRotator& OutWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSavedFreddyLocationAndRotation(bool& OutFreddyInWorld, FVector& OutWorldLocation, FRotator& OutWorldRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFNAFRuinAISaveData GetRuinAIState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPowerStationInfo(bool& OutPlayerInPowerStation, int32& OutPowerStationID) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetMazercisePanel(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLivesRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetGoalPathName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFNAFBasePlayerCharacter* GetFreddyPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreddyPatrolPoint() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<int32, bool> GetDeactivatedCautionBots_Map();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSpottedCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentMinigameActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentMinigame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDeathCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentActivityId() const;
    
    UFUNCTION(BlueprintCallable)
    TSet<FName> GetBonnieBowlMMMJumspscareData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FArcadeSaveData GetArcadeState() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllCurrentActivables();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFNAFAISaveData GetAIState() const;
    
    UFUNCTION(BlueprintCallable)
    void EndMinigame();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetPlayerHasUsedHidingSpot(bool HasHid);
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerInPowerStation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanStartMinigame(bool& CanStart, ECantStartMinigameReason& reason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowInstructionCards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnterExitFreddy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCallFreddy() const;
    
    UFUNCTION(BlueprintCallable)
    void AddSpotted();
    
    UFUNCTION(BlueprintCallable)
    void AddDeath(int32& OutRemainingLives);
    
    UFUNCTION(BlueprintCallable)
    void AddDeactivatedCautionBot(int32 CautionBotID, bool isDeactivated);
    
    UFUNCTION(BlueprintCallable)
    void AddBonnieBowlMMMJumpscareSaveID(FName inSaveID);
    
    UFUNCTION(BlueprintCallable)
    void AddActivated(FName ActivatableName);
    
    
    // Fix for true pure virtual functions not being implemented
};

