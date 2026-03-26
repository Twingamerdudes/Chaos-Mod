#pragma once
#include "CoreMinimal.h"
#include "FNAFMessageTableStruct.h"
#include "OnInventoryMessageAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryMessageAdded, FName, MessageName, FFNAFMessageTableStruct, MessageInfo);

