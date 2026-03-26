#pragma once
#include "CoreMinimal.h"
#include "EFNAFGameState.h"
#include "OnWorldStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWorldStateChanged, EFNAFGameState, NewState, EFNAFGameState, PreviousState);

