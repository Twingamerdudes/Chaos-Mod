#pragma once
#include "CoreMinimal.h"
#include "OnBadgeLevelUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBadgeLevelUpdated, int32, NewLevel);

