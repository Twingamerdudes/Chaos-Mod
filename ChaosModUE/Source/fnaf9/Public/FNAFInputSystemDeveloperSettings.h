#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ESWGInputDeviceType.h"
#include "FNAFInputSystemDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=EditorUserSettings)
class FNAF9_API UFNAFInputSystemDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideInputDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESWGInputDeviceType OverrideInputDevice;
    
    UFNAFInputSystemDeveloperSettings();
};

