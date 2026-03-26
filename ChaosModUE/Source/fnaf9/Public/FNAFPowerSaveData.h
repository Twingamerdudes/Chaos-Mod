#pragma once
#include "CoreMinimal.h"
#include "FNAFPowerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FFNAFPowerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPowerLevel;
    
    FNAF9_API FFNAFPowerSaveData();
};

