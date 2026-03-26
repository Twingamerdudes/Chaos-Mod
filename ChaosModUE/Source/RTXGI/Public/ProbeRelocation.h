#pragma once
#include "CoreMinimal.h"
#include "ProbeRelocation.generated.h"

USTRUCT(BlueprintType)
struct FProbeRelocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticProbeRelocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbeMinFrontfaceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbeBackfaceThreshold;
    
    RTXGI_API FProbeRelocation();
};

