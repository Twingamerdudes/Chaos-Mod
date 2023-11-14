#pragma once
#include "CoreMinimal.h"
#include "EMissionStatus.h"
#include "FNAFMissionState.generated.h"

USTRUCT(BlueprintType)
struct FFNAFMissionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CompletedTasks;
    
    FNAF9_API FFNAFMissionState();
};

