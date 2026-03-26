#pragma once
#include "CoreMinimal.h"
#include "FNAFMissionInfo.h"
#include "FNAFMissionState.h"
#include "OnMissionUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMissionUpdatedDelegate, const FName&, MissionName, const FFNAFMissionState&, MissionState, const FFNAFMissionInfo&, MissionInfo);

