#pragma once
#include "CoreMinimal.h"
#include "ChicaFeedingFrenzySaveData.generated.h"

USTRUCT(BlueprintType)
struct FChicaFeedingFrenzySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Played;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Glitched;
    
    FNAF9_API FChicaFeedingFrenzySaveData();
};

