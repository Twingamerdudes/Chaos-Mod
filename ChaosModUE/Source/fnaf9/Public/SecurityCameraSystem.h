#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "OnCameraAlertDelegateDelegate.h"
#include "OnCameraRegisterDelegateDelegate.h"
#include "OnCameraTriggerAlertDelegateDelegate.h"
#include "SecurityCameraSystem.generated.h"

class ASecurityCamera;

UCLASS(Blueprintable)
class FNAF9_API USecurityCameraSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraAlertDelegate OnCameraAlert;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraRegisterDelegate OnCameraRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraRegisterDelegate OnCameraUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraTriggerAlertDelegate OnCameraTriggerAlert;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraTriggerAlertDelegate OnCameraTriggerLostAlert;
    
    USecurityCameraSystem();
    UFUNCTION(BlueprintCallable)
    void PlayerSpotted(ASecurityCamera* SecurityCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASecurityCamera*> GetAllSecurityCameras() const;
    
};

