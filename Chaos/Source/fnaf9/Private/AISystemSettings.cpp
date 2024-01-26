#include "AISystemSettings.h"

UAISystemSettings::UAISystemSettings() {
    this->MinimumSpawnDistance = 2000.00f;
    this->MaximumSpawnDistance = 4000.00f;
    this->SpawnDelayTime = 20.00f;
    this->TimeBetweenSightings = 30.00f;
    this->OutOfRangeDistance = 6000.00f;
    this->TeleportDistance = 4500.00f;
    this->VannyMeterIncreasePerSecond = 1.00f;
    this->VannyMeterIncreasePerCampSecond = 4.00f;
    this->VannyMeterIncreasePerSoundUnit = 1.00f;
    this->VannyMeterIncreasePerGift = 10.00f;
    this->VannyMeterLowAppear = 300.00f;
    this->VannyMeterMax = 800.00f;
    this->VannyMeterPerHourBase.AddDefaulted(6);
}

