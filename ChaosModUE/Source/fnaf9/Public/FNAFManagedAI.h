#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EFNAFAISpawnType.h"
#include "FNAFManagedAI.generated.h"

class APawn;

UINTERFACE(Blueprintable, MinimalAPI)
class UFNAFManagedAI : public UInterface {
    GENERATED_BODY()
};

class IFNAFManagedAI : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TeleportAI(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMoveTo(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendVanessaAlert(APawn* VanessaPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendPositionalAlert(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsShatteredVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMeshVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EFNAFAISpawnType GetManagedAIType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetCurrentPathName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceTrackToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceJumpscarePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndTrackToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanReceiveAlert();
    
};

