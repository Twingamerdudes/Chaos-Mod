#pragma once
#include "CoreMinimal.h"
#include "EMissionUpdateType.h"
#include "FNAFMissionInfo.h"
#include "FNAFMissionState.h"
#include "MissionDisplayUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FMissionDisplayUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionUpdateType UpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFNAFMissionInfo MissionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFNAFMissionState MissionState;
    
    FNAF9_API FMissionDisplayUpdateInfo();
};

