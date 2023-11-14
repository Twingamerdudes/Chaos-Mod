#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFNAFAISpawnType.h"
#include "AIEnvironmentQueryInfo.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class FNAF9_API UAIEnvironmentQueryInfo : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNAFAISpawnType AIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EnvirontmentQuery;
    
    UAIEnvironmentQueryInfo();
};

