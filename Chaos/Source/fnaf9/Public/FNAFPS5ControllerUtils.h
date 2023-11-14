#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FNAFPS5Trigger.h"
#include "FNAFPS5ControllerUtils.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UFNAFPS5ControllerUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFNAFPS5ControllerUtils();
private:
    UFUNCTION(BlueprintCallable)
    static void TurnOffAdaptiveTrigger(int32 ControllerId, FNAFPS5Trigger Trigger);
    
    UFUNCTION(BlueprintCallable)
    static void SetupTriggerVibration(int32 ControllerId, FNAFPS5Trigger Trigger, uint8 Position, uint8 Frequency, uint8 Amplitude);
    
    UFUNCTION(BlueprintCallable)
    static void SetupTriggerFeedback(int32 ControllerId, FNAFPS5Trigger Trigger, uint8 Position, uint8 Strength);
    
    UFUNCTION(BlueprintCallable)
    static void SetupAdaptiveTrigger(int32 ControllerId, FNAFPS5Trigger Trigger, uint8 StartPosition, uint8 EndPosition, uint8 Strength);
    
};

