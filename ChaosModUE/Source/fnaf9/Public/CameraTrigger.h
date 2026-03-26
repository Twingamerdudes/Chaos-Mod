#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EAlertType.h"
#include "CameraTrigger.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UCameraTrigger : public UInterface {
    GENERATED_BODY()
};

class ICameraTrigger : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EAlertType GetAlertType() const;
    
};

