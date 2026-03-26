#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPlayerPawnType.h"
#include "FNAFPawnTypeProviderInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFNAFPawnTypeProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IFNAFPawnTypeProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPlayerPawnType GetPlayerPawnType() const;
    
};

