#pragma once
#include "CoreMinimal.h"
#include "ELightingScenario.h"
#include "LightScenarioManagerData.generated.h"

USTRUCT(BlueprintType)
struct FNAF9_API FLightScenarioManagerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ELightingScenario Scenario;
    
    FLightScenarioManagerData();
};

