#pragma once
#include "CoreMinimal.h"
#include "EMissionInQueue.generated.h"

UENUM(BlueprintType)
enum class EMissionInQueue : uint8 {
    HasMoreMissions,
    NoMoreMissions,
};

