#pragma once
#include "CoreMinimal.h"
#include "OnMMRegisterSpawnDelegate.generated.h"

class AMoonmanSpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMMRegisterSpawn, AMoonmanSpawnPoint*, InSpawnPoint);

