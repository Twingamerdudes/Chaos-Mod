#pragma once
#include "CoreMinimal.h"
#include "OnSightChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSightChanged, AActor*, UpdatedActor, bool, bVisible);

