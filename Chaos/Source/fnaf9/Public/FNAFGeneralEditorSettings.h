#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "FNAFGeneralEditorSettings.generated.h"

UCLASS(Blueprintable, Config=EditorUserSettings)
class FNAF9_API UFNAFGeneralEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSurvivalMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPIEUseIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSurvivalAllLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinutesPerHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SurvivalSeed;
    
    UFNAFGeneralEditorSettings();
};

