#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFNAFAISpawnType.h"
#include "FNAFAISettingInfo.h"
#include "FNAFAICharacterInfo.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UFNAFAICharacterInfo : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNAFAISpawnType AIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFNAFAISettingInfo SettingInfo;
    
    UFNAFAICharacterInfo();
};

