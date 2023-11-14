#pragma once
#include "CoreMinimal.h"
#include "OnCameraRegisterDelegateDelegate.generated.h"

class ASecurityCamera;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraRegisterDelegate, ASecurityCamera*, SecurityCamera);

