#pragma once
#include "CoreMinimal.h"
#include "OnDoorLockStateChangedDelegate.generated.h"

class UDoorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDoorLockStateChanged, UDoorComponent*, DoorComponent, bool, bLocked);

