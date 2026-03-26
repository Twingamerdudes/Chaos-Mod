#pragma once
#include "CoreMinimal.h"
#include "EMissionUpdateType.generated.h"

UENUM(BlueprintType)
enum class EMissionUpdateType : uint8 {
    NewMission,
    UpdateInfoState,
    Completed,
};

