#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "FNAFGameUserSettings.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UFNAFGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisualQualityLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RayTraceQualityLevel;
    
    UFNAFGameUserSettings();
};

