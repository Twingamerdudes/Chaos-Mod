#include "SurvivalItemRandomizer.h"

void ASurvivalItemRandomizer::RandomizeSurvivalItems(bool bSpawnAllLocations) {
}

bool ASurvivalItemRandomizer::HasCollected(const ASurvivalItemPackage* Package) const {
    return false;
}

TArray<ASurvivalItemPackage*> ASurvivalItemRandomizer::GetPackagesSortedByDistance() {
    return TArray<ASurvivalItemPackage*>();
}

UMaterialInterface* ASurvivalItemRandomizer::GetGlitchMaterial() const {
    return NULL;
}

ASurvivalItemRandomizer::ASurvivalItemRandomizer() {
    this->GlitchMaterial = NULL;
    this->RadiusForGlitchInteract = 100.00f;
}

