#pragma once
#include "CoreMinimal.h"
#include "AnimatronicTypeData.h"
#include "DLC_RabbitSaveData.h"
#include "FNAFRuinAISaveData.generated.h"

USTRUCT(BlueprintType)
struct FFNAFRuinAISaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDLC_RabbitSaveData DLC_RabbitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FAnimatronicTypeData> DLC_Rabbit_TypesToAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 DLC_Rabbit_AlertNumber;
    
    FNAF9_API FFNAFRuinAISaveData();
};

