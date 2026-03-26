#pragma once
#include "CoreMinimal.h"
#include "EConditionCheckType.h"
#include "PlayerTrigger.h"
#include "PlayerTriggerWithConditionComps.generated.h"

UCLASS(Blueprintable)
class FNAF9_API APlayerTriggerWithConditionComps : public APlayerTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType ConditionCheck;
    
    APlayerTriggerWithConditionComps();
};

