#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AIHiderInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UAIHiderInterface : public UInterface {
    GENERATED_BODY()
};

class IAIHiderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitHideMode(AActor* HideActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterHideMode(AActor* HideActor);
    
};

