#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnTimeReachedDynamicDelegateDelegate.h"
#include "ScaledTimeDetails.h"
#include "ScaledTimeSystem.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UScaledTimeSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeReachedDynamicDelegate MoonmanKillDelegate;
    
    UScaledTimeSystem();
    UFUNCTION(BlueprintCallable)
    void UpdateScaledTimeDataRows(TMap<FName, FScaledTimeDetails> Rows);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnpauseCurrentTimer() const;
    
    UFUNCTION(BlueprintCallable)
    void StopCurrentTimer();
    
    UFUNCTION(BlueprintCallable)
    bool StartTimerSeconds(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    bool StartTimerFromRowName(FName TimerRowName);
    
    UFUNCTION(BlueprintCallable)
    bool StartTimerFromNightNumber(int32 NightNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetupNewGame() const;
    
    UFUNCTION(BlueprintCallable)
    void RestartCurrentTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PauseCurrentTimer() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAntiVirusMoonmanTriggered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsTimerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetTimeLeftSeconds() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FScaledTimeDetails> GetScaledTimeDataRows();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetIsTimerPaused() const;
    
};

