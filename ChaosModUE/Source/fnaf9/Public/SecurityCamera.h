#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SecurityCamera.generated.h"

class USceneCaptureComponent2D;
class USceneComponent;
class USightComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class FNAF9_API ASecurityCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USightComponent* PlayerDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PlayerControlledPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USightComponent* EnemyDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraInventoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FazwatchAccessible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerDetectorStartsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyDetectorStartsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiltMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiltMax;
    
    ASecurityCamera();
    UFUNCTION(BlueprintCallable)
    void StopOfficeMode();
    
    UFUNCTION(BlueprintCallable)
    void StartOfficeMode();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerDetectorEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemeyDetectorEnabled(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDetectorSightChanged(AActor* UpdatedActor, bool bVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfficeModeStarted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnemyDetectorSightChanged(AActor* UpdatedActor, bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraUnlocked(bool OnlyShowCurrentMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDetectedEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetVisibleEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneCaptureComponent2D* GetPlayerSceneCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetCaptureTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CaptureView();
    
};

