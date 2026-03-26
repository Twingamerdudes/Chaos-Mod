#pragma once
#include "CoreMinimal.h"
#include "OnMMUnregisterSpawnDelegate.generated.h"

class AMoonmanSpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMMUnregisterSpawn, AMoonmanSpawnPoint*, InSpawnPoint);

