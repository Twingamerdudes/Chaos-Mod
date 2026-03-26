#pragma once
#include "CoreMinimal.h"
#include "EFNAFAISpawnType.h"
#include "AnimatronicExpectedData.generated.h"

USTRUCT(BlueprintType)
struct FAnimatronicExpectedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNAFAISpawnType AIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PathName;
    
    FNAF9_API FAnimatronicExpectedData();
};

