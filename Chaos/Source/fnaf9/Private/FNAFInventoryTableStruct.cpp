#include "FNAFInventoryTableStruct.h"

FFNAFInventoryTableStruct::FFNAFInventoryTableStruct() {
    this->Category = EInventoryItemCategory::None;
    this->SurvivalCategory = EInventoryItemSurvivalCategory::None;
    this->PrizeVIP = false;
    this->ItemIcon = NULL;
    this->ItemModel = NULL;
    this->Chapter = 0;
}

