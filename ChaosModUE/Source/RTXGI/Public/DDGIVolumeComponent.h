#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "EDDGIRaysPerProbe.h"
#include "EDDGISkyLightType.h"
#include "ProbeRelocation.h"
#include "DDGIVolumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RTXGI_API UDDGIVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdatePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendingCutoffDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RuntimeStatic;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastOrigin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDDGIRaysPerProbe RaysPerProbe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector ProbeCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbeMaxRayDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbeHistoryWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProbeRelocation ProbeRelocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScrollProbesInfinitely;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisualizeProbes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector ProbeScrollOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float probeDistanceExponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float probeIrradianceEncodingGamma;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float probeChangeThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float probeBrightnessThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDDGISkyLightType SkyLightTypeOnRayMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmissiveMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IrradianceScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels LightingChannels;
    
    UDDGIVolumeComponent();
    UFUNCTION(BlueprintCallable)
    void ToggleVolume(bool IsVolumeEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetProbesVisualization(bool IsProbesVisualized);
    
    UFUNCTION(BlueprintCallable)
    void SetLightMultiplier(float NewLightMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetIrradianceScalar(float NewIrradianceScalar);
    
    UFUNCTION(BlueprintCallable)
    void SetEmissiveMultiplier(float NewEmissiveMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLightMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIrradianceScalar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEmissiveMultiplier() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DDGIClearVolumes();
    
    UFUNCTION(BlueprintCallable)
    void ClearProbeData();
    
};

