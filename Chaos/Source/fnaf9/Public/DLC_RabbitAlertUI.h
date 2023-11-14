#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DLC_RabbitAlertUI.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDLC_RabbitAlertUI : public UInterface {
    GENERATED_BODY()
};

class IDLC_RabbitAlertUI : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSoftJumpscare();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowRabbitFlicker();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideSoftJumpscare();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideAlert();
    
};

