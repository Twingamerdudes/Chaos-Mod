#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "OnControlTypeChangedDelegate.h"
#include "FNAFBasePlayerController.generated.h"

UCLASS(Blueprintable)
class FNAF9_API AFNAFBasePlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControlTypeChanged OnControlTypeChanged;
    
    AFNAFBasePlayerController();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUsingGamepadChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnlockEverything();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerVannyScare();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleLocalizationQA();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleFlightMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleDevUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleCinemaMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugSequenceEntered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GiveVIPAchievement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKey> GetCurrentKeysDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyOtherKeysDown(FKey Key) const;
    
};

