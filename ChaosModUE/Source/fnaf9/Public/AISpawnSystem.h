#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AISpawnSystem.generated.h"

class APawn;

UCLASS(Blueprintable)
class FNAF9_API AAISpawnSystem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> ExistingAI;
    
    AAISpawnSystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnRollChange();
    
};

