#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LightScenarioAreaMapInfo -FallbackName=LightScenarioAreaMapInfo
#include "ELightScenarioArea.h"
#include "LightScenarioAreaInfo.h"
#include "LightScenarioManagerSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class FNAF9_API ULightScenarioManagerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELightScenarioArea, FLightScenarioAreaInfo> LightScenarioInfo;
    
    ULightScenarioManagerSettings();
};

