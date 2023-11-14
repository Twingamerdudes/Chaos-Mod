#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GlitchManagerInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UGlitchManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IGlitchManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupGlitchActivators(const TArray<AActor*>& GlitchActivators);
    
};

