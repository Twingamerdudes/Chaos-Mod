#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HUDProviderInterface.generated.h"

UINTERFACE(Blueprintable)
class UHUDProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IHUDProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowCinimaticSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideHUD(bool bHideProgressWheel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginCinimaticSkipFade(float DelayDuration);
    
};

