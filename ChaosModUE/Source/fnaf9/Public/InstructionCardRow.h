#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESWGInputDeviceType.h"
#include "InstructionCardRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FNAF9_API FInstructionCardRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultTexture2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESWGInputDeviceType, UTexture2D*> PerControllerTexture2D;
    
    FInstructionCardRow();
};

