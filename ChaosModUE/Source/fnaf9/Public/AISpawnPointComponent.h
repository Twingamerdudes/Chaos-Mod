#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "AISpawnPointComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UAISpawnPointComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UAISpawnPointComponent();
};

