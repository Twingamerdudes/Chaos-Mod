#pragma once
#include "CoreMinimal.h"
#include "ESurvivalDifficulty.generated.h"

UENUM(BlueprintType)
enum class ESurvivalDifficulty : uint8 {
    Easy,
    Medium,
    Hard,
    Nightmare,
};

