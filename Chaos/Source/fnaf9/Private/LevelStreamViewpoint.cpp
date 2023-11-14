#include "LevelStreamViewpoint.h"

void ULevelStreamViewpoint::SetStreamingEnable(bool bEnable) {
}

void ULevelStreamViewpoint::OnLevelManagerUpdated() {
}

TArray<FName> ULevelStreamViewpoint::GetStreamingLevelNames() const {
    return TArray<FName>();
}

bool ULevelStreamViewpoint::AnyLevelsLoaded() const {
    return false;
}

bool ULevelStreamViewpoint::AllLevelsLoaded() const {
    return false;
}

ULevelStreamViewpoint::ULevelStreamViewpoint() {
    this->bStreamingEnable = false;
    this->bEnableStreamOnActivePawn = false;
}

