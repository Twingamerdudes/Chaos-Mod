#pragma once
#include "CoreMinimal.h"
#include "EFNAFAISpawnType.h"
#include "DLC_RabbitEnemySequenceDataStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDLC_RabbitEnemySequenceDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InterfaceImplementor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFNAFAISpawnType EnemyType;
    
    FNAF9_API FDLC_RabbitEnemySequenceDataStruct();
};

