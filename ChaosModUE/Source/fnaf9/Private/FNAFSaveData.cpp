#include "FNAFSaveData.h"

void UFNAFSaveData::SetHourOfCheckpoint(int32 InHour) {
}

UFNAFSaveData::UFNAFSaveData() {
    this->Hour = 0;
    this->Minute = 0;
    this->GameIteration = 0;
    this->TotalTimePlayedInSeconds = 0;
    this->bInPowerStation = false;
    this->PowerStationID = 0;
}

