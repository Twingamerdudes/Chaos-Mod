#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FNAFMessageTableStruct.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FFNAFMessageTableStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundWave> Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InGame;
    
    FNAF9_API FFNAFMessageTableStruct();
};

