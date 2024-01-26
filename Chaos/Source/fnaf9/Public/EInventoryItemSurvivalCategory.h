#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemSurvivalCategory.generated.h"

UENUM(BlueprintType)
enum class EInventoryItemSurvivalCategory : uint8 {
    None,
    Key,
    Item,
    FreddyUpgrade,
    BotUpgrade,
    GregoryUpgrade,
    Bad,
    Collectible_Common,
    Collectible_Uncommon,
    Collectible_Rare,
    Collectible_UltraRare,
    LobbyKey,
    Flashlight,
};

