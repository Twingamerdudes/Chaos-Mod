#pragma once
#include "CoreMinimal.h"
#include "OnPawnExitedDoorDelegate.generated.h"

class APawn;
class UDoorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnExitedDoor, UDoorComponent*, DoorComponent, APawn*, Pawn);

