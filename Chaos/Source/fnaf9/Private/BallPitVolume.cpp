#include "BallPitVolume.h"
#include "Components/BoxComponent.h"

ABallPitVolume::ABallPitVolume() {
    this->Volume = CreateDefaultSubobject<UBoxComponent>(TEXT("Volume"));
}

