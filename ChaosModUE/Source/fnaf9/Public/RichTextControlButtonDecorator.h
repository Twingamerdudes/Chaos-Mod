#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextControlButtonDecorator.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class FNAF9_API URichTextControlButtonDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ButtonSet;
    
    URichTextControlButtonDecorator();
};

