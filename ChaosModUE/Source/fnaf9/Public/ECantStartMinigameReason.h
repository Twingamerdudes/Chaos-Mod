#pragma once
#include "CoreMinimal.h"
#include "ECantStartMinigameReason.generated.h"

UENUM(BlueprintType)
enum class ECantStartMinigameReason : uint8 {
    None,
    AlreadyInMinigame,
    PlayerInDanger,
    MoonMan,
    Survival,
};

