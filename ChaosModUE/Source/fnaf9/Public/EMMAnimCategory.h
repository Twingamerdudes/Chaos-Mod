#pragma once
#include "CoreMinimal.h"
#include "EMMAnimCategory.generated.h"

UENUM(BlueprintType)
enum class EMMAnimCategory : uint8 {
    None,
    GeneralFloor,
    GeneralCeiling,
    RightEdge,
    RightEdgeCrawl,
    LeftEdge,
    LeftEdgeCrawl,
    FloorEdge,
    CeilingEdge,
    ClosingIn,
    GeneralFloor_01,
    GeneralCeiling_01,
    RightEdge_01,
    RightEdgeCrawl_01,
    LeftEdge_01,
    LeftEdgeCrawl_01,
    FloorEdge_01,
    CeilingEdge_01,
};

