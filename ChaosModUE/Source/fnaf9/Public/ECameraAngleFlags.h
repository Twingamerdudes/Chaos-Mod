#pragma once
#include "CoreMinimal.h"
#include "ECameraAngleFlags.generated.h"

UENUM(BlueprintType)
enum class ECameraAngleFlags : uint8 {
    Horizontal = 0x1,
    Vertical,
    HorizontalAndVertical,
    None = 0x0,
    ECameraAngleFlags_MAX = 0x4,
};

