#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PointOfInterestRuntimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FPointOfInterestRuntimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    ROOMSYSTEM_API FPointOfInterestRuntimeInfo();
};

