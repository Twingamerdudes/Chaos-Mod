#pragma once
#include "CoreMinimal.h"
#include "OnPlayerRoomEventDelegate.generated.h"

class ARoomAreaBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRoomEvent, ARoomAreaBase*, Room);

