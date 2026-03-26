#pragma once
#include "CoreMinimal.h"
#include "PrincessQuestTwoSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPrincessQuestTwoSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Played;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Glitched;
    
    FNAF9_API FPrincessQuestTwoSaveData();
};

