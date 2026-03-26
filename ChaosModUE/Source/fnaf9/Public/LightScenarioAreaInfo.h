#pragma once
#include "CoreMinimal.h"
#include "LightScenarioAreaInfo.generated.h"

USTRUCT(BlueprintType)
struct FLightScenarioAreaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightsOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Dawn;
    
    FNAF9_API FLightScenarioAreaInfo();
};

