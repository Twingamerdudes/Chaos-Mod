#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FNAFEventObject.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFNAFEventObject : public UInterface {
    GENERATED_BODY()
};

class IFNAFEventObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEventFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlayEvent();
    
};

