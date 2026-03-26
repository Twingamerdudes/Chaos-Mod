#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMissionInQueue.h"
#include "EMissionUpdateType.h"
#include "FNAFMissionInfo.h"
#include "FNAFMissionState.h"
#include "MissionDisplayUpdateInfo.h"
#include "MissionDisplayQueueLibrary.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UMissionDisplayQueueLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMissionDisplayQueueLibrary();
    UFUNCTION(BlueprintCallable)
    static void PushMissionUpdate(EMissionUpdateType UpdateType, const FName& MissionName, const FFNAFMissionInfo& MissionInfo, const FFNAFMissionState& MissionState);
    
    UFUNCTION(BlueprintCallable)
    static void HasMissionUpdateInQueue(EMissionInQueue& MissionInQueue);
    
    UFUNCTION(BlueprintCallable)
    static FMissionDisplayUpdateInfo GetNextMissionUpdate();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMissionUpdateQueue();
    
};

