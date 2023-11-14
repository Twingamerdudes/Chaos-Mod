#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SecurityNodeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API USecurityNodeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USecurityNodeComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawDebugGraph();
    
};

