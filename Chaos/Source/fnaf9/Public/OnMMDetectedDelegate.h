#pragma once
#include "CoreMinimal.h"
#include "OnMMDetectedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMMDetected, AActor*, UpdatedActor, bool, bVisible);

