#pragma once
#include "CoreMinimal.h"
#include "OnGameClockTickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameClockTick, int32, Hour, int32, Minute);

