#pragma once
#include "CoreMinimal.h"
#include "OnPlayerTriggeredActivatorDelegateDelegate.generated.h"

class AFNAFBasePlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerTriggeredActivatorDelegate, AFNAFBasePlayerCharacter*, CollidingPlayer);

