#pragma once
#include "CoreMinimal.h"
#include "EConditionFailReason.generated.h"

UENUM(BlueprintType)
enum class EConditionFailReason : uint8 {
    None,
    ItemRequired,
    SecurityLevel,
    PartyPass,
    WrongPawn,
    Error,
};

