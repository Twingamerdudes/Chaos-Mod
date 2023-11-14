#pragma once
#include "CoreMinimal.h"
#include "EDDGIProbesVisulizationMode.generated.h"

UENUM(BlueprintType)
enum class EDDGIProbesVisulizationMode : uint8 {
    off,
    irrad,
    distr,
    distg,
};

