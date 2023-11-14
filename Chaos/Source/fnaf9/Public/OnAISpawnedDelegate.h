#pragma once
#include "CoreMinimal.h"
#include "OnAISpawnedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAISpawned, APawn*, SpawnedPawn);

