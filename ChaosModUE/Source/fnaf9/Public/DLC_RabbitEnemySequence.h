#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DLC_RabbitEnemySequence.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDLC_RabbitEnemySequence : public UInterface {
    GENERATED_BODY()
};

class IDLC_RabbitEnemySequence : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestStop();
    
};

