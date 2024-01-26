#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallPitVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class FNAF9_API ABallPitVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Balls;
    
    ABallPitVolume();
};

