#pragma once
#include "CoreMinimal.h"
#include "EGameActivityEndType.generated.h"

UENUM(BlueprintType)
enum class EGameActivityEndType : uint8 {
    Completed,
    Failed,
    Cancelled,
};

