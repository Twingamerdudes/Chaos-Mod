#pragma once
#include "CoreMinimal.h"
#include "OnConditionResultUpdatedDelegate.generated.h"

class IConditionCheckInterface;
class UConditionCheckInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnConditionResultUpdated, TScriptInterface<IConditionCheckInterface>, UpdatedCondition);

