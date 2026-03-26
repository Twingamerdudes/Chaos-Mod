#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FNAFAISettingInfo.generated.h"

USTRUCT(BlueprintType)
struct FFNAFAISettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath StandardType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath ShatteredType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath RuinedSingleSpawnType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath RuinedPatrolType;
    
    FNAF9_API FFNAFAISettingInfo();
};

