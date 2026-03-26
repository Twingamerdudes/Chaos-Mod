#pragma once
#include "CoreMinimal.h"
#include "OnObjectStateChangedDelegate.generated.h"

class UWorldStateHandlerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectStateChanged, UWorldStateHandlerComponent*, Handler, bool, bState);

