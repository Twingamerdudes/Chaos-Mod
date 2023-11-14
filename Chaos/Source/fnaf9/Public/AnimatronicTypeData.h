#pragma once
#include "CoreMinimal.h"
#include "EFNAFAISpawnType.h"
#include "EFNAFAISubType.h"
#include "AnimatronicTypeData.generated.h"

USTRUCT(BlueprintType)
struct FAnimatronicTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNAFAISpawnType AIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNAFAISubType AISubType;
    
    FNAF9_API FAnimatronicTypeData();
};

