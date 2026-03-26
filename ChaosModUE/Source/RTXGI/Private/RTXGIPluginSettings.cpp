#include "RTXGIPluginSettings.h"

URTXGIPluginSettings::URTXGIPluginSettings() {
    this->IrradianceBits = EDDGIIrradianceBits::n10;
    this->DistanceBits = EDDGIDistanceBits::n16;
    this->DebugProbeRadius = 15.00f;
    this->ProbeUpdateRayBudget = 0;
    this->ProbesVisualization = EDDGIProbesVisulizationMode::irrad;
    this->ProbesDepthScale = 1000.00f;
    this->SerializeProbes = true;
}

