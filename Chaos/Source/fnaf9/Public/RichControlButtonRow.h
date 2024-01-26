#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateBrush.h"
#include "ESWGInputDeviceType.h"
#include "RichControlButtonRow.generated.h"

USTRUCT(BlueprintType)
struct FNAF9_API FRichControlButtonRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DefaultBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESWGInputDeviceType, FSlateBrush> PerControllerBrush;
    
    FRichControlButtonRow();
};

