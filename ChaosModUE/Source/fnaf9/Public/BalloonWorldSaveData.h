#pragma once
#include "CoreMinimal.h"
#include "BalloonWorldSaveData.generated.h"

USTRUCT(BlueprintType)
struct FBalloonWorldSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Played;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Glitched;
    
    FNAF9_API FBalloonWorldSaveData();
};

