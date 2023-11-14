#pragma once
#include "CoreMinimal.h"
#include "OnSetAIDisplayDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetAIDisplay, bool, enable);

