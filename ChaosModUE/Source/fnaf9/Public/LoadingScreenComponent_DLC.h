#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LoadingScreenComponent_DLC.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API ULoadingScreenComponent_DLC : public UActorComponent {
    GENERATED_BODY()
public:
    ULoadingScreenComponent_DLC();
};

