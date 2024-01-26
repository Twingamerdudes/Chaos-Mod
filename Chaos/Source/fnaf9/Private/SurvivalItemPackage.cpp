#include "SurvivalItemPackage.h"

void ASurvivalItemPackage::OnSetup_Implementation() {
}

bool ASurvivalItemPackage::HasCollected() const {
    return false;
}

void ASurvivalItemPackage::Collect() {
}

ASurvivalItemPackage::ASurvivalItemPackage() {
    this->SurvivalRandomizer = NULL;
}

