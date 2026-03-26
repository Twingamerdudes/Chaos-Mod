#include "ForcedGCSubsystem.h"

bool UForcedGCSubsystem::GetForceGCInProgrcess() const {
    return false;
}

void UForcedGCSubsystem::ForceGC() {
}

UForcedGCSubsystem::UForcedGCSubsystem() {
    this->ForceGCRequests = 0;
}

