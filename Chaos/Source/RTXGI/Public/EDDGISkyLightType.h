#pragma once
#include "CoreMinimal.h"
#include "EDDGISkyLightType.generated.h"

UENUM()
enum class EDDGISkyLightType : int32 {
    None,
    Raster,
    RayTracing,
};

