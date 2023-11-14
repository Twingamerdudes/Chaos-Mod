#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "LightStreamingVolume.generated.h"

UCLASS(Blueprintable)
class ALightStreamingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightScenarioArea;
    
    ALightStreamingVolume();
};

