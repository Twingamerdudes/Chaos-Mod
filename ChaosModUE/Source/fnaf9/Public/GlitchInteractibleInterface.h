#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GlitchInteractibleInterface.generated.h"

class AActor;
class AGlitchRandomItem;

UINTERFACE(Blueprintable)
class UGlitchInteractibleInterface : public UInterface {
    GENERATED_BODY()
};

class IGlitchInteractibleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupGlitchInteractible(AGlitchRandomItem* GlitchRandomItem, AActor* GlitchManager, float GlitchRadius);
    
};

