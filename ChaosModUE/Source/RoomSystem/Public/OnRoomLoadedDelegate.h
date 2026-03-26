#pragma once
#include "CoreMinimal.h"
#include "OnRoomLoadedDelegate.generated.h"

class ARoomAreaBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoomLoaded, ARoomAreaBase*, Room);

