#pragma once
#include "CoreMinimal.h"
#include "ESWGXboxPlatform.generated.h"

UENUM(BlueprintType)
enum class ESWGXboxPlatform : uint8 {
    NotXbox,
    XboxOne,
    XboxOneS,
    XboxOneX,
    XboxSeriesS,
    XboxSeriesX,
};

