#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "EGameActivityEndType.h"
#include "ESWGEditor.h"
#include "ESWGPlatform.h"
#include "ESWGXboxPlatform.h"
#include "SWGPlatformUtilFunctions.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class SWGPLATFORMUTIL_API USWGPlatformUtilFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USWGPlatformUtilFunctions();
    UFUNCTION(BlueprintCallable)
    static void SwitchOnPlatform(ESWGPlatform& Platform);
    
    UFUNCTION(BlueprintCallable)
    static void StartActivity(APlayerController* PlayerController, const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    static void SetActivityAvailability(APlayerController* PlayerController, const FString& ActivityId, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void IsInEditorSwitch(ESWGEditor& Editor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GPUSupportsRayTracing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESWGXboxPlatform GetXboxSpecificPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetVersionString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGPU();
    
    UFUNCTION(BlueprintCallable)
    static FKey GetGamepadBackKey();
    
    UFUNCTION(BlueprintCallable)
    static FKey GetGamepadAcceptKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESWGPlatform GetBuildPlatform();
    
    UFUNCTION(BlueprintCallable)
    static void EndActivity(APlayerController* PlayerController, const FString& ActivityId, EGameActivityEndType Outcome);
    
};

