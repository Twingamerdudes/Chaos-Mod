#pragma once
#include "CoreMinimal.h"
#include "EFNAFAISpawnType.h"
#include "OnAISpawnedDelegate.h"
#include "PlayerTrigger.h"
#include "AISpawnTrigger.generated.h"

class APawn;
class UArrowComponent;

UCLASS(Blueprintable)
class FNAF9_API AAISpawnTrigger : public APlayerTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAISpawned OnAISpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAISpawned OnAISpawnedFailureDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnAnyCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceShattered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFNAFAISpawnType> SpawnCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SpawnLocation;
    
public:
    AAISpawnTrigger();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISpawnedFailure(APawn* SpawnedPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAISpawned(APawn* SpawnedPawn);
    
};

