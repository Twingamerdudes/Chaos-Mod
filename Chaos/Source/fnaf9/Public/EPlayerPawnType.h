#pragma once
#include "CoreMinimal.h"
#include "EPlayerPawnType.generated.h"

UENUM(BlueprintType)
enum class EPlayerPawnType : uint8 {
    None,
    Flying,
    Gregory,
    Freddy,
    StaffBot,
    Cassie,
};

