#pragma once
#include "CoreMinimal.h"
#include "EFNAFAISubType.generated.h"

UENUM(BlueprintType)
enum class EFNAFAISubType : uint8 {
    Normal,
    Shattered,
    Ruined_SingleSpawn,
    Ruined_Patrol,
    None,
};

