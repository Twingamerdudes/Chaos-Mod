#include "RoomSystemSettings.h"

URoomSystemSettings::URoomSystemSettings() {
    this->PlayerRoomHeatIncreaseRate = 0.05f;
    this->PlayerRoomHeatDecayRate = 0.01f;
    this->PlayerRoomRecentDecay = 0.10f;
    this->AIRoomHeatIncreaseRate = 0.05f;
    this->AIRoomHeatDecayRate = 0.01f;
    this->MaxPOIHeat = 10.00f;
    this->POINearIncreasePerSecond = 0.10f;
    this->POIHeatIncreaseOnCollect = 1.00f;
}

