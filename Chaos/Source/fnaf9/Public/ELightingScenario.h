#pragma once
#include "CoreMinimal.h"
#include "ELightingScenario.generated.h"

UENUM(BlueprintType)
enum class ELightingScenario : uint8 {
    None,
    LightsOn,
    LightsOff,
    Dawn,
    DLC,
};

