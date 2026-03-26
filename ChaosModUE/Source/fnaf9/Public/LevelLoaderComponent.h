#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelLoaderComponent.generated.h"

class UChowdaDebugSubsystem;
class ULevelStreaming;
class ULightScenarioManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API ULevelLoaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnloadScenarioOnly;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChowdaDebugSubsystem* ChowdaDebuger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* LightingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULightScenarioManager* LightScenarioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelsToUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextLightScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnloadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OldLevelsAreUnLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NextLevelsAreVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightMapToUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightMapToLoad;
    
public:
    ULevelLoaderComponent();
    UFUNCTION(BlueprintCallable)
    void UnLoadCurrentScenario();
    
    UFUNCTION(BlueprintCallable)
    int32 SetNextLightScenario(int32 Scenario);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> SetLevelsToUnLoad(TArray<FName> UnloadedLevels);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> SetLevelsToLoad(TArray<FName> LoadedLevels);
    
    UFUNCTION(BlueprintCallable)
    void LoadTheNextScenario();
    
    UFUNCTION(BlueprintCallable)
    void LoadTheNextArea();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetLevelsToLoad();
    
private:
    UFUNCTION(BlueprintCallable)
    void DebugSkipToNextArea();
    
};

