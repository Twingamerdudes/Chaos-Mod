#include "MissionMarker.h"

int32 AMissionMarker::GetStateIndex() const {
    return 0;
}

FName AMissionMarker::GetMissionName() const {
    return NAME_None;
}

AMissionMarker::AMissionMarker() {
    this->MissionStateIndex = -1;
}

