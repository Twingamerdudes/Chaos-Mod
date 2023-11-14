#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ChowdaPawnInterface_DLC.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UChowdaPawnInterface_DLC : public UInterface {
    GENERATED_BODY()
};

class IChowdaPawnInterface_DLC : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceEject();
    
};

