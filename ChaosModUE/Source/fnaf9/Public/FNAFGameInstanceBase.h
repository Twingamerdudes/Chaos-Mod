#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EFNAFGameType.h"
#include "FNAFGameInstanceBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class FNAF9_API UFNAFGameInstanceBase : public UGameInstance {
    GENERATED_BODY()
public:
    UFNAFGameInstanceBase();
    UFUNCTION(BlueprintCallable)
    void StartGamePlay(EFNAFGameType GameType);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualQualityLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void SetSplashFinished(bool bFinished);
    
    UFUNCTION(BlueprintCallable)
    void SetRayTraceQualityLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void SetPresenceForLocalPlayers(const FString& StatusStr, const FString& PresenceData);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOnLoadingScreen(bool bOnLoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFromTitleForChowda(bool In_FromTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPlayersFocusToViewport();
    
    UFUNCTION(BlueprintCallable)
    void ProcessActivityIntent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoginChanged(bool bLoggedIn, int32 UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerControllerPairingChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingScreenStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingScreenEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameActivityLoadComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerConnectionChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnApplicationReactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnApplicationDeactivated();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void LogGameClockDelegates();
    
    UFUNCTION(BlueprintCallable)
    void LoadGameTips(EFNAFGameType GameType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNormalPlay() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadingActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFromTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSplashFinished() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetVisualQualityLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRayTraceQualityLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerControllerID();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsShippingConfig();
    
    UFUNCTION(BlueprintCallable)
    float GetGPUBenchmarkResult();
    
    UFUNCTION(BlueprintCallable)
    FText GetGameTipTextByIndexDLC(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    FText GetGameTipTextByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFNAFGameType GetCurrentGameType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCPUBenchmarkResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAllLoadedLevelsString() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreenDLC();
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void CheckForPlayerLoginChanged();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLocalPlayerController(int32 UserId);
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreenDLC();
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreen();
    
};

