#pragma once
#include "CoreMinimal.h"
#include "OnSourceDetectedDelegate.generated.h"

class AActor;
class UVisualSourceComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSourceDetected, UVisualSourceComponent*, VisualSource, AActor*, UpdatedActor, bool, bVisible);

