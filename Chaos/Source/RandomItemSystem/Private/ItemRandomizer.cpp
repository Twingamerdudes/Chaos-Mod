#include "ItemRandomizer.h"
#include "Templates/SubclassOf.h"

void AItemRandomizer::SetupItem_Implementation(ARandomItemGroup* ItemGroup, FRandomStream& RandomStream) {
}

void AItemRandomizer::Randomize_Implementation(TSubclassOf<ARandomItemGroup> RandomItemCls, FRandomStream& RandomStream) {
}

void AItemRandomizer::PickRandomLocationFromGroup_Implementation(ARandomItemGroup* Group, FRandomStream& RandomStream, int32& OutLocationIndex) {
}

AItemRandomizer::AItemRandomizer() {
}

