#pragma once
#include "CoreMinimal.h"
#include "EConditionFailReason.h"
#include "OnPawnEnteredDoorDelegate.generated.h"

class APawn;
class UDoorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPawnEnteredDoor, UDoorComponent*, DoorComponent, APawn*, Pawn, bool, bPassedDoorCheck, EConditionFailReason, FailReason);

