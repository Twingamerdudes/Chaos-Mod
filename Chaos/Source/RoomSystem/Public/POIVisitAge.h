#pragma once
#include "CoreMinimal.h"
#include "POIResult.h"
#include "POIVisitAge.generated.h"

USTRUCT(BlueprintType)
struct FPOIVisitAge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPOIResult POI;
    
    ROOMSYSTEM_API FPOIVisitAge();
};

