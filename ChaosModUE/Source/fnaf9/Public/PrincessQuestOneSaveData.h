#pragma once
#include "CoreMinimal.h"
#include "PrincessQuestOneSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPrincessQuestOneSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Played;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Glitched;
    
    FNAF9_API FPrincessQuestOneSaveData();
};

