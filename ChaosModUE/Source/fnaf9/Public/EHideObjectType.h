#pragma once
#include "CoreMinimal.h"
#include "EHideObjectType.generated.h"

UENUM(BlueprintType)
enum class EHideObjectType : uint8 {
    None,
    Table,
    Locker,
    PhotoBooth,
    FirstAidBooth,
    Stroller,
    ServiceCart,
    Kiosk,
    BeverageCart,
};

