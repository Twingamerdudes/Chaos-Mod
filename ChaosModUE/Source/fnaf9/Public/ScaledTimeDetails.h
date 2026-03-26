#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ScaledTimeDetails.generated.h"

USTRUCT(BlueprintType)
struct FScaledTimeDetails : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLengthInSeconds;
    
    FNAF9_API FScaledTimeDetails();
};

