#pragma once
#include "CoreMinimal.h"
#include "POIIndex.h"
#include "PointOfInterestRuntimeInfo.h"
#include "POIResult.generated.h"

USTRUCT(BlueprintType)
struct FPOIResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPOIIndex Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointOfInterestRuntimeInfo Info;
    
    ROOMSYSTEM_API FPOIResult();
};

