#pragma once
#include "CoreMinimal.h"
#include "FNAFInventoryTableStruct.h"
#include "OnInventoryItemAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemAdded, FName, ItemName, FFNAFInventoryTableStruct, InventoryItemInfo);

