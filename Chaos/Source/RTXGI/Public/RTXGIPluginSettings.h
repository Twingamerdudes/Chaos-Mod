#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EDDGIDistanceBits.h"
#include "EDDGIIrradianceBits.h"
#include "EDDGIProbesVisulizationMode.h"
#include "RTXGIPluginSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class URTXGIPluginSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDDGIIrradianceBits IrradianceBits;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDDGIDistanceBits DistanceBits;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugProbeRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProbeUpdateRayBudget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDDGIProbesVisulizationMode ProbesVisualization;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbesDepthScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SerializeProbes;
    
    URTXGIPluginSettings();
};

