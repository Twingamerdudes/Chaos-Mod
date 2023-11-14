#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ESWGInputDeviceType.h"
#include "OnInputDeviceTypeChangedDelegate.h"
#include "FNAFInputDeviceSystem.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UFNAFInputDeviceSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputDeviceTypeChanged OnInputDeviceTypeChanged;
    
    UFNAFInputDeviceSystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESWGInputDeviceType GetCurrentInputDevice() const;
    
};

