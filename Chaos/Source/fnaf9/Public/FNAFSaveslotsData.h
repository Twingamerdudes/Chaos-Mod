#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FNAFSaveslotsData.generated.h"

USTRUCT(BlueprintType)
struct FFNAFSaveslotsData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SlotNameByUser;
    
    FNAF9_API FFNAFSaveslotsData();
};

