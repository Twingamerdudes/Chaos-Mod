#pragma once
#include "CoreMinimal.h"
#include "EFNAFAISpawnType.h"
#include "AIDistanceResult.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FAIDistanceResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNAFAISpawnType AIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavDistance;
    
    FNAF9_API FAIDistanceResult();
};

