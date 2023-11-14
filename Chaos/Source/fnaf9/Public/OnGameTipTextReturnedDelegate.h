#pragma once
#include "CoreMinimal.h"
#include "OnGameTipTextReturnedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGameTipTextReturned, FText, Text);

