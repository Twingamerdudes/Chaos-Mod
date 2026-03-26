#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OnSetAIDisplayDelegate.h"
#include "fnaf9GameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class FNAF9_API Afnaf9GameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetAIDisplay OnSetAIDisplay;
    
    Afnaf9GameModeBase();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFullAIDisplay();
    
    UFUNCTION(BlueprintCallable)
    void StartRepairGame();
    
    UFUNCTION(BlueprintCallable)
    void SetAIDisplay(bool enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RoomHeatDisplay(bool enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void POIVisible(bool bVisible) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void POIDetectionVisible(bool bVisible) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerFlashlightVis(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoomHeatDisplayChanged(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerFlashlightVis(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceSpawnVanny();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAIPawnsVis(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIDisplayOn() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSpawnVanny();
    
    UFUNCTION(BlueprintCallable)
    void FinishRepairGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIPawnsVis(bool bEnable);
    
};

