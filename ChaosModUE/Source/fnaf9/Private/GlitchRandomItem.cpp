#include "GlitchRandomItem.h"

void AGlitchRandomItem::GlitchFixed() {
}

TSet<TSoftObjectPtr<AActor>> AGlitchRandomItem::GetActors() const {
    return TSet<TSoftObjectPtr<AActor>>();
}

AGlitchRandomItem::AGlitchRandomItem() {
    this->Minigame = EMinigameType::None;
}

