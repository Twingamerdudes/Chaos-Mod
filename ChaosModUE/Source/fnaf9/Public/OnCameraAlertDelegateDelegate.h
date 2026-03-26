#pragma once
#include "CoreMinimal.h"
#include "OnCameraAlertDelegateDelegate.generated.h"

class ASecurityCamera;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraAlertDelegate, ASecurityCamera*, SecurityCamera);

