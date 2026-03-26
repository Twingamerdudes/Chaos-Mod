#pragma once
#include "CoreMinimal.h"
#include "ESWGPlatform.generated.h"

UENUM(BlueprintType)
enum class ESWGPlatform : uint8 {
    Steam,
    Oculus,
    PS4,
    PS5,
    Switch,
    Stadia,
    XboxOne,
    XSX,
};

