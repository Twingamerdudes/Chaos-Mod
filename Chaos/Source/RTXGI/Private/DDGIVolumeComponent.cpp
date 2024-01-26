#include "DDGIVolumeComponent.h"

void UDDGIVolumeComponent::ToggleVolume(bool IsVolumeEnabled) {
}

void UDDGIVolumeComponent::SetProbesVisualization(bool IsProbesVisualized) {
}

void UDDGIVolumeComponent::SetLightMultiplier(float NewLightMultiplier) {
}

void UDDGIVolumeComponent::SetIrradianceScalar(float NewIrradianceScalar) {
}

void UDDGIVolumeComponent::SetEmissiveMultiplier(float NewEmissiveMultiplier) {
}

float UDDGIVolumeComponent::GetLightMultiplier() const {
    return 0.0f;
}

float UDDGIVolumeComponent::GetIrradianceScalar() const {
    return 0.0f;
}

float UDDGIVolumeComponent::GetEmissiveMultiplier() const {
    return 0.0f;
}

void UDDGIVolumeComponent::DDGIClearVolumes() {
}

void UDDGIVolumeComponent::ClearProbeData() {
}

UDDGIVolumeComponent::UDDGIVolumeComponent() {
    this->EnableVolume = true;
    this->UpdatePriority = 1.00f;
    this->LightingPriority = 0;
    this->BlendingDistance = 20.00f;
    this->BlendingCutoffDistance = 0.00f;
    this->RuntimeStatic = false;
    this->RaysPerProbe = EDDGIRaysPerProbe::n288;
    this->ProbeMaxRayDistance = 100000.00f;
    this->ProbeHistoryWeight = 0.97f;
    this->ScrollProbesInfinitely = false;
    this->VisualizeProbes = false;
    this->probeDistanceExponent = 50.00f;
    this->probeIrradianceEncodingGamma = 5.00f;
    this->probeChangeThreshold = 0.20f;
    this->probeBrightnessThreshold = 2.00f;
    this->SkyLightTypeOnRayMiss = EDDGISkyLightType::Raster;
    this->ViewBias = 40.00f;
    this->NormalBias = 10.00f;
    this->LightMultiplier = 1.00f;
    this->EmissiveMultiplier = 1.00f;
    this->IrradianceScalar = 1.00f;
}

