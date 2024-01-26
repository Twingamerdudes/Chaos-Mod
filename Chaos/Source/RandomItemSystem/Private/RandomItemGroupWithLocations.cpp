#include "RandomItemGroupWithLocations.h"

TArray<FVector> ARandomItemGroupWithLocations::GetPossibleLocations() const {
    return TArray<FVector>();
}

ARandomItemGroupWithLocations::ARandomItemGroupWithLocations() {
    this->PossibleLocations.AddDefaulted(1);
}

