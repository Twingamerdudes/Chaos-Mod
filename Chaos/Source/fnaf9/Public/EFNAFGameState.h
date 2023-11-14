#pragma once
#include "CoreMinimal.h"
#include "EFNAFGameState.generated.h"

UENUM(BlueprintType)
enum class EFNAFGameState : uint8 {
    Normal,
    MoonManLite,
    MoonManIntermediate,
    MoonManDanger,
    RepairGame,
    OfficeGame,
    BossGame,
    PowerCycle,
};

