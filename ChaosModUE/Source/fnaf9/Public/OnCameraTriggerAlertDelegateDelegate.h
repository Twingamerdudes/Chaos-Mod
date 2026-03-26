#pragma once
#include "CoreMinimal.h"
#include "OnCameraTriggerAlertDelegateDelegate.generated.h"

class ASecurityCamera;
class ICameraTrigger;
class UCameraTrigger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraTriggerAlertDelegate, ASecurityCamera*, SecurityCamera, TScriptInterface<ICameraTrigger>, CameraTrigger);

