#pragma once
#include "CoreMinimal.h"
#include "ESWGInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class ESWGInputDeviceType : uint8 {
    MouseAndKeyboard,
    XBox,
    Switch,
    DUALSHOCK,
};

