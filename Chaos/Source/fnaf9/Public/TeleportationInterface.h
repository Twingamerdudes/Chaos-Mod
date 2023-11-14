#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TeleportationInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UTeleportationInterface : public UInterface {
    GENERATED_BODY()
};

class ITeleportationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpringArmEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpringArmDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnBlackRabbit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMaskIconOverlayActive(bool Active);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerFinishedTeleporting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerCannotTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MaskIconRemoveMask();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MaskIconNearBlocker(bool NearBlocker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MaskIconDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MaskIconCantTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayerMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnablePlayerInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisablePlayerInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateGlitchUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAITeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float AICapsuleHalfHeight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateTeleportFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateGlitchUI();
    
};

