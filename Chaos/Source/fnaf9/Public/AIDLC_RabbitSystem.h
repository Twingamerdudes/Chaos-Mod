#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "ARValueUpdatedDelegate.h"
#include "AnimatronicTypeData.h"
#include "BanishRabbitDelegate.h"
#include "DLC_RabbitEnemySequenceDataStruct.h"
#include "DLC_RabbitSaveData.h"
#include "OnDLCRabbitSpawnedDelegate.h"
#include "SaveHandlerInterface.h"
#include "AIDLC_RabbitSystem.generated.h"

class AActor;
class UDataTable;
class UEnvQuery;

UCLASS(Blueprintable)
class FNAF9_API UAIDLC_RabbitSystem : public UWorldSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDLCRabbitSpawned onDLCRabbitTimerStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FARValueUpdated OnARValueUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBanishRabbit OnBanishRabbit;
    
    UAIDLC_RabbitSystem();
    UFUNCTION(BlueprintCallable)
    void UnregisterAnimation(AActor* InterfaceImplementor);
    
    UFUNCTION(BlueprintCallable)
    void UnpauseTimers();
    
    UFUNCTION(BlueprintCallable)
    void StopPsuedoAlert();
    
    UFUNCTION(BlueprintCallable)
    void StartPsuedoAlert(FVector TrackLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetupQueryData(UEnvQuery* InFindSpawnPointEQSA, UEnvQuery* InFindSpawnPointEQSB, UEnvQuery* InFindSpawnPointEQSA_Close, UEnvQuery* InFindSpawnPointEQSB_Close, UDataTable* InDLC_RabbitDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetTypesToAlert(TArray<FAnimatronicTypeData> TypesToAlertIn);
    
    UFUNCTION(BlueprintCallable)
    void SetTrailSpeed(float NewTrailSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetStareTime(float NewStareTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnTime(float NewSpawnTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnRadius(float NewSpawnRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnInViewChance(float NewSpawnInViewChance);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnCloseMaxDistance(float NewSpawnCloseMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnCloseChance(float NewSpawnCloseChance);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnCloseAlertDelay(float NewSpawnCloseAlertDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetSoftJumpscareTime(float NewSoftJumpscareTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSoftJumpscareChance(float NewSoftJumpscareChance);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseTime(float NewPauseTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseRate(float NewPauseRate);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterRange(float NewOuterRange);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberToAlert(int32 NumberToAlertIn);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveLength(float NewMoveLength);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerRange(float NewInnerRange);
    
    UFUNCTION(BlueprintCallable)
    void SetInhibitorRadius(float NewInhibitorRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetHasBeenAgitatedByWalkieTalkie(bool NewHasBeenAgitated);
    
    UFUNCTION(BlueprintCallable)
    void SetDLC_RabbitData(FDLC_RabbitSaveData Data);
    
    UFUNCTION(BlueprintCallable)
    void SetDespawnTime(float NewDespawnTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldownPhaseTwo(float NewCooldownPhaseTwo);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldownPhaseOne(float NewCooldownPhaseOne);
    
    UFUNCTION(BlueprintCallable)
    void SetARTrailSpeed(float NewTrailSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetARStareTime(float NewARStareTime);
    
    UFUNCTION(BlueprintCallable)
    void SetARSpawnTime(float NewARSpawnTime);
    
    UFUNCTION(BlueprintCallable)
    void SetARSpawnRadius(float NewARSpawnRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetARSpawnInViewChance(float NewARSpawnInViewChance);
    
    UFUNCTION(BlueprintCallable)
    void SetARSpawnCloseMaxDistance(float NewARSpawnCloseMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetARSpawnCloseChance(float NewARSpawnCloseChance);
    
    UFUNCTION(BlueprintCallable)
    void SetARSpawnCloseAlertDelay(float NewARSpawnCloseAlertDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetARSoftJumpscareTime(float NewARSoftJumpscareTime);
    
    UFUNCTION(BlueprintCallable)
    void SetARSoftJumpscareChance(float NewARSoftJumpscareChance);
    
    UFUNCTION(BlueprintCallable)
    void SetARPauseTime(float NewARPauseTime);
    
    UFUNCTION(BlueprintCallable)
    void SetARPauseRate(float NewARPauseRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAROuterRange(float NewAROuterRange);
    
    UFUNCTION(BlueprintCallable)
    void SetARMoveLength(float NewARMoveLength);
    
    UFUNCTION(BlueprintCallable)
    void SetARInnerRange(float NewARInnerRange);
    
    UFUNCTION(BlueprintCallable)
    void SetARInhibitorRadius(float NewARInhibitorRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetARHasBeenAgitatedByWalkieTalkie(bool NewARHasBeenAgitated);
    
    UFUNCTION(BlueprintCallable)
    void SetARDLC_RabbitData(FDLC_RabbitSaveData Data);
    
    UFUNCTION(BlueprintCallable)
    void SetARDespawnTime(float NewARDespawnTime);
    
    UFUNCTION(BlueprintCallable)
    void SetARCooldownPhaseTwo(float NewARCooldownPhaseTwo);
    
    UFUNCTION(BlueprintCallable)
    void SetARCooldownPhaseOne(float NewARCooldownPhaseOne);
    
    UFUNCTION(BlueprintCallable)
    void SetARAnimatronicSpawnDistance(float NewARAnimatronicSpawnDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetARAnimatronicDespawnRadius(float NewARAnimatronicDespawnRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetARAlertPhaseLength(float NewARAlertPhaseLength);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimatronicSpawnDistance(float NewAnimatronicSpawnDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimatronicDespawnRadius(float NewAnimatronicDespawnRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetAlertPhaseLength(float NewAlertPhaseLength);
    
    UFUNCTION(BlueprintCallable)
    void RespawnRabbitAI();
    
    UFUNCTION(BlueprintCallable)
    void RespawnAlertAI();
    
    UFUNCTION(BlueprintCallable)
    void ResetARDLC_RabbitValues();
    
    UFUNCTION(BlueprintCallable)
    void RegisterDLC_RabbitActor(AActor* DLC_RabbitIn);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAnimation(FDLC_RabbitEnemySequenceDataStruct DataIn);
    
    UFUNCTION(BlueprintCallable)
    void PauseTimers();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSwitch(bool NormalWorld);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSoftJumpscareFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnNormalWorldEntry();
    
    UFUNCTION(BlueprintCallable)
    void OnARWorldEntry();
    
    UFUNCTION(BlueprintCallable)
    bool GetUseAlertDelay();
    
    UFUNCTION(BlueprintCallable)
    TArray<FAnimatronicTypeData> GetTypesToAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrailSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStareTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnInViewChance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnCloseMaxDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnCloseChance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnCloseAlertDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoftJumpscareTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoftJumpscareChance();
    
    UFUNCTION(BlueprintCallable)
    bool GetShouldSpawnBehind();
    
    UFUNCTION(BlueprintCallable)
    float GetRemainingSpawnTimePercent();
    
    UFUNCTION(BlueprintCallable)
    float GetRemainingSpawnTime();
    
    UFUNCTION(BlueprintCallable)
    float GetRemainingAlertTimePercent();
    
    UFUNCTION(BlueprintCallable)
    float GetRemainingAlertTime();
    
    UFUNCTION(BlueprintCallable)
    float GetProximityPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPauseTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPauseRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOuterRange();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberToAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveLength();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAlerted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInnerRange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInhibitorRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasBeenAgitatedByWalkieTalkie();
    
    UFUNCTION(BlueprintCallable)
    FDLC_RabbitSaveData GetDLC_RabbitData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDespawnTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownPhaseTwo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownPhaseOne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARTrailSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARStareTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARSpawnTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARSpawnRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARSpawnInViewChance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARSpawnCloseMaxDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARSpawnCloseChance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARSpawnCloseAlertDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARSoftJumpscareTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARSoftJumpscareChance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARPauseTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARPauseRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAROuterRange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARMoveLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARInnerRange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARInhibitorRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetARHasBeenAgitatedByWalkieTalkie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDLC_RabbitSaveData GetARDLC_RabbitData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARDespawnTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARCooldownPhaseTwo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARCooldownPhaseOne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARAnimatronicSpawnDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARAnimatronicDespawnRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetARAlertPhaseLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimatronicSpawnDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimatronicDespawnRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlertPhaseLength();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAlertedActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesDLC_RabbitExist();
    
    UFUNCTION(BlueprintCallable)
    void ConstructAlertedActorList();
    
    UFUNCTION(BlueprintCallable)
    void BanishRabbit();
    
    UFUNCTION(BlueprintCallable)
    void AlertFinished();
    
    UFUNCTION(BlueprintCallable)
    void Alert();
    
    
    // Fix for true pure virtual functions not being implemented
};

