#include "DDGIVolume.h"
#include "DDGIVolumeComponent.h"

ADDGIVolume::ADDGIVolume() {
    this->DDGIVolumeComponent = CreateDefaultSubobject<UDDGIVolumeComponent>(TEXT("DDGI"));
}

