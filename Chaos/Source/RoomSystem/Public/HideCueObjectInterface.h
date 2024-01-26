#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HideCueObjectInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHideCueObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IHideCueObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWorldCue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetWorldCue();
    
};

