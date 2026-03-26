#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ESWGPlatform.h"
#include "SWGPlatformSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class SWGPLATFORMUTIL_API USWGPlatformSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESWGPlatform BuildPlatform;
    
public:
    USWGPlatformSettings();
};

