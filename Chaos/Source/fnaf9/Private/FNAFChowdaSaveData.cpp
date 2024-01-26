#include "FNAFChowdaSaveData.h"

UFNAFChowdaSaveData::UFNAFChowdaSaveData() {
    this->CollectedCautionBotSouls = 0;
    this->LastLoadedMapArea = EMapArea::Lobby;
    this->LastLoadedLightScenario = 0;
    this->bPlayerInNormal = true;
    this->Chapter = 1;
    this->bInChapterReplay = false;
    this->FirstSaveInChapter = false;
    this->ForceCrouchOnLoad = false;
}

