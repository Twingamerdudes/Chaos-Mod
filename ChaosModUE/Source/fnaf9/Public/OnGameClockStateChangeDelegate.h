#pragma once
#include "CoreMinimal.h"
#include "OnGameClockStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameClockStateChange, bool, bIsRunning);

