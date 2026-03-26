#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIPathComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UAIPathComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAIPathComponent();
};

