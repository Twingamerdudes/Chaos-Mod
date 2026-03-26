#pragma once
#include "CoreMinimal.h"
#include "OnGameClockTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameClockTimeChanged, int32, Hour, int32, Minute);

