#pragma once
#include "CoreMinimal.h"
#include "OnConditionalCheckUpdatedDelegate.generated.h"

class UConditionalCheckComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConditionalCheckUpdated, UConditionalCheckComponent*, ConditionCheckComponent, bool, bNewResult);

