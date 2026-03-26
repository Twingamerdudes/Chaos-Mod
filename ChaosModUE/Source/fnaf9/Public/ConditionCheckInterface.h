#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OnConditionResultUpdatedDelegate.h"
#include "ConditionCheckInterface.generated.h"

UINTERFACE(Blueprintable)
class UConditionCheckInterface : public UInterface {
    GENERATED_BODY()
};

class IConditionCheckInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnbindConditionUpdatedDelegate(const FOnConditionResultUpdated& OnConditionResultUpdated);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConditionsMet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindConditionUpdatedDelegate(const FOnConditionResultUpdated& OnConditionResultUpdated);
    
};

