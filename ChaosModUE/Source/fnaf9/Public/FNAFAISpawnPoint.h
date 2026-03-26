#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "EFNAFAISpawnType.h"
#include "FNAFAISpawnPoint.generated.h"

UCLASS(Blueprintable)
class FNAF9_API AFNAFAISpawnPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNAFAISpawnType AIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStagedPoint;
    
public:
    AFNAFAISpawnPoint();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFNAFAISpawnType GetAIType() const;
    
};

