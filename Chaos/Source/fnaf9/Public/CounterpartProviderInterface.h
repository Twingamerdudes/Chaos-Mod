#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CounterpartProviderInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UCounterpartProviderInterface : public UInterface {
    GENERATED_BODY()
};

class ICounterpartProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetCounterPart();
    
};

