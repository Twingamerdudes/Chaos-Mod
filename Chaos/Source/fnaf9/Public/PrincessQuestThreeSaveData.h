#pragma once
#include "CoreMinimal.h"
#include "PrincessQuestThreeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPrincessQuestThreeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Played;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Glitched;
    
    FNAF9_API FPrincessQuestThreeSaveData();
};

