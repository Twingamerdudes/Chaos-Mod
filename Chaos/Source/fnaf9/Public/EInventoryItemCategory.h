#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemCategory.generated.h"

UENUM(BlueprintType)
enum class EInventoryItemCategory : uint8 {
    None,
    Message,
    Equipment,
    Food,
    Toys,
    Trophy,
    LostAndFound,
    Character,
    Clothing,
    SecurityBadge,
    PartyBadge,
    RetroCD,
    CollectibleDLC,
    RealCollectables,
    ARCollectables,
};

