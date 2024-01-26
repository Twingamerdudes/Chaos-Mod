#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnGameClockStateChangeDelegate.h"
#include "OnGameClockTickDelegate.h"
#include "OnGameClockTickDeltaDelegate.h"
#include "OnGameClockTimeChangedDelegate.h"
#include "OnTimeReachedDynamicDelegateDelegate.h"
#include "SaveHandlerInterface.h"
#include "GameClockSystem.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UGameClockSystem : public UGameInstanceSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameClockStateChange OnGameClockStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeReachedDynamicDelegate NormalModeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeReachedDynamicDelegate MoonmanLiteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeReachedDynamicDelegate MoonmanIntermediateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeReachedDynamicDelegate MoonmanDangerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameClockTick OnGameClockTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameClockTimeChanged OnGameClockTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameClockTickDelta OnGameClockTickDelta;
    
    UGameClockSystem();
    UFUNCTION(BlueprintCallable)
    void StartNextHour();
    
    UFUNCTION(BlueprintCallable)
    void SetGameTimeEvent(FOnTimeReachedDynamicDelegate Delegate, int32 Hour, int32 Minute);
    
    UFUNCTION(BlueprintCallable)
    void SetGameEndEvent(FOnTimeReachedDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTime(int32 Hour, int32 Minute, bool bPlayDelegates);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMinute(int32 Minute);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHour(int32 Hour);
    
    UFUNCTION(BlueprintCallable)
    void SetClockRunning(bool bRunClock);
    
    UFUNCTION(BlueprintCallable)
    void SetClockRateInMinutesPerHour(int32 MinutesPerHour);
    
    UFUNCTION(BlueprintCallable)
    void SetClockRate(int32 TotalRealHours);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimeDelegatesUpTo(int32 Hour, int32 Minute);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNormalModeTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnMoonmanLiteTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnMoonmanIntermediateTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnMoonmanDangerTriggered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClockRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentTime(int32& Hour, int32& Minute) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

