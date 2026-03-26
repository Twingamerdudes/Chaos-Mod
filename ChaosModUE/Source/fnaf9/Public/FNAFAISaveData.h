#pragma once
#include "CoreMinimal.h"
#include "AnimatronicState.h"
#include "EFNAFAISpawnType.h"
#include "EndoSaveData.h"
#include "FNAFAISaveData.generated.h"

USTRUCT(BlueprintType)
struct FFNAFAISaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShatteredChica;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShatteredRoxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShatteredMonty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bWorldSpawnEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAITeleportEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EFNAFAISpawnType, FAnimatronicState> AnimatronicStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FEndoSaveData> Endos;
    
    FNAF9_API FFNAFAISaveData();
};

