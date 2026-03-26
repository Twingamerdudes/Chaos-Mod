#pragma once
#include "CoreMinimal.h"
#include "MinigolfOneSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMinigolfOneSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Played;
    
    FNAF9_API FMinigolfOneSaveData();
};

