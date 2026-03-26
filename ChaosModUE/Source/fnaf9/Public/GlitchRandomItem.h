#pragma once
#include "CoreMinimal.h"
#include "RandomItemGroup.h"
#include "EMinigameType.h"
#include "GlitchRandomItem.generated.h"

class AActor;

UCLASS(Blueprintable)
class FNAF9_API AGlitchRandomItem : public ARandomItemGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMinigameType Minigame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<AActor>> ActorReferences;
    
public:
    AGlitchRandomItem();
    UFUNCTION(BlueprintCallable)
    void GlitchFixed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<TSoftObjectPtr<AActor>> GetActors() const;
    
};

