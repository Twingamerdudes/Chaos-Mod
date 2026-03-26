#include "FNAFAISpawnPoint.h"

EFNAFAISpawnType AFNAFAISpawnPoint::GetAIType() const {
    return EFNAFAISpawnType::Chica;
}

AFNAFAISpawnPoint::AFNAFAISpawnPoint() {
    this->bUseType = false;
    this->AIType = EFNAFAISpawnType::Chica;
    this->bIsStagedPoint = false;
}

