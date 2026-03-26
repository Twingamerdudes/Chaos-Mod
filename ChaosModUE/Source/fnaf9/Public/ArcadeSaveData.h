#pragma once
#include "CoreMinimal.h"
#include "BalloonWorldSaveData.h"
#include "ChicaFeedingFrenzySaveData.h"
#include "MinigolfFullSaveData.h"
#include "MinigolfOneSaveData.h"
#include "MinigolfTwoSaveData.h"
#include "PrincessQuestOneSaveData.h"
#include "PrincessQuestThreeSaveData.h"
#include "PrincessQuestTwoSaveData.h"
#include "ArcadeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FArcadeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBalloonWorldSaveData BalloonWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChicaFeedingFrenzySaveData ChicaFeedingFrenzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigolfOneSaveData MinigolfOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigolfTwoSaveData MinigolfTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigolfFullSaveData MinigolfFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrincessQuestOneSaveData PrincessQuestOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrincessQuestTwoSaveData PrincessQuestTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrincessQuestThreeSaveData PrincessQuestThree;
    
    FNAF9_API FArcadeSaveData();
};

