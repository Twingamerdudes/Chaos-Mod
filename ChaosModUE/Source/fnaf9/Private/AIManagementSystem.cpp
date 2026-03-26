#include "AIManagementSystem.h"
#include "Templates/SubclassOf.h"

void UAIManagementSystem::UnregisterSeekerPath(TScriptInterface<ISeekerPatrolPath> SeekerPatrolPath) {
}

void UAIManagementSystem::UnRegisterAI(APawn* AIPawn) {
}

void UAIManagementSystem::UnpauseManager() {
}

void UAIManagementSystem::StoreEndoStates() {
}

void UAIManagementSystem::StoreAnimatronicSpawnWithSubType(EFNAFAISpawnType AIType, FName PathName, EFNAFAISubType AISubType) {
}

void UAIManagementSystem::StoreAnimatronicSpawn(EFNAFAISpawnType AIType, FName PathName, bool bIsShattered) {
}

void UAIManagementSystem::StartManager() {
}

void UAIManagementSystem::SpawnVannyOrVanessa(bool bSpawnVanny, bool& bOutSpawned, FLatentActionInfo LatentActionInfo) {
}

APawn* UAIManagementSystem::SpawnSpecificAIOnPathWithSubType(EFNAFAISpawnType AIType, EFNAFAISubType AISubType, FName PathName) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnSpecificAIOnPath(EFNAFAISpawnType AIType, bool bForceShattered, FName PathName) {
    return NULL;
}

void UAIManagementSystem::SpawnSpecificAIAtSpawnPointWithSubType(AFNAFAISpawnPoint* SpawnPoint, EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType) {
}

void UAIManagementSystem::SpawnSpecificAIAtSpawnPoint(AFNAFAISpawnPoint* SpawnPoint, EFNAFAISpawnType AIType, bool ForceShattered) {
}

APawn* UAIManagementSystem::SpawnAIWithTransformAndPathWithSubType(EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType, const FTransform& SpawnTransform, FName PathName) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAIWithTransformAndPath(EFNAFAISpawnType AIType, bool bForceShattered, const FTransform& SpawnTransform, FName PathName) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAITypeWithTransformWithSubType(EFNAFAISpawnType AIType, const FTransform& SpawnTransform, EFNAFAISubType forceAISubType, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, AActor* Owner) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAITypeWithTransformSafeWithSubType(EFNAFAISpawnType AIType, const FTransform& SpawnTransform, EFNAFAISubType forceAISubType, bool& success, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, AActor* Owner, bool bForceRespawn) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAITypeWithTransformSafe(EFNAFAISpawnType AIType, const FTransform& SpawnTransform, bool ForceShattered, bool& success, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, AActor* Owner, bool bForceRespawn) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAITypeWithTransform(EFNAFAISpawnType AIType, const FTransform& SpawnTransform, bool ForceShattered, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, AActor* Owner) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAITypeAtLocationWithSubType(EFNAFAISpawnType AIType, const FVector& SpawnLocation, EFNAFAISubType forceAISubType) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAITypeAtLocation(EFNAFAISpawnType AIType, const FVector& SpawnLocation, bool ForceShattered) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAIOnPathWithSubType(EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType, FName PathName) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAIOnPathNearLocation(EFNAFAISpawnType AIType, const FVector& Location, FName PathName) {
    return NULL;
}

APawn* UAIManagementSystem::SpawnAIOnPath(EFNAFAISpawnType AIType, bool bForceShattered, FName PathName) {
    return NULL;
}

void UAIManagementSystem::SpawnAINearPlayer() {
}

void UAIManagementSystem::SpawnAIFar() {
}

void UAIManagementSystem::SpawnAIAtSpawnPointWithSubType(AFNAFAISpawnPoint* SpawnPoint, EFNAFAISubType forceAISubType) {
}

void UAIManagementSystem::SpawnAIAtSpawnPoint(AFNAFAISpawnPoint* SpawnPoint, bool bForceShattered) {
}

void UAIManagementSystem::SpawnAIAtDistance(float Distance) {
}

void UAIManagementSystem::SetWorldSpawnEnabled(bool bEnable) {
}

void UAIManagementSystem::SetVanessaSpawnEnable(bool bEnable) {
}

void UAIManagementSystem::SetUseStagedSpawns(bool enable) {
}

void UAIManagementSystem::SetSpawningEnabled(bool enable) {
}

void UAIManagementSystem::SetExpectedAI(const TArray<FAnimatronicExpectedData>& AITypes) {
}

void UAIManagementSystem::SetAllAIExpected() {
}

void UAIManagementSystem::SetAITeleportEnabled(bool bEnable) {
}

void UAIManagementSystem::SendVanessaAlert(TArray<EFNAFAISpawnType> TypesToAlert, int32 NumberToAlert) {
}

void UAIManagementSystem::SendGeneralAlert(const FVector& AlertLocation, TArray<FAnimatronicTypeData> TypesToAlert, int32 NumberToAlert) {
}

void UAIManagementSystem::RespawnEndos() {
}

void UAIManagementSystem::RespawnAnimatronics() {
}

void UAIManagementSystem::RespawnAllAI() {
}

void UAIManagementSystem::Reset() {
}

void UAIManagementSystem::RemoveExpectedAI(EFNAFAISpawnType AIType) {
}

void UAIManagementSystem::RemoveCharacterByType(EFNAFAISpawnType AIType) {
}

void UAIManagementSystem::RemoveAllCharacters() {
}

void UAIManagementSystem::RegisterSeekerPath(TScriptInterface<ISeekerPatrolPath> SeekerPatrolPath) {
}

void UAIManagementSystem::RegisterAI(APawn* AIPawn) {
}

void UAIManagementSystem::PawnExitedRoom(APawn* AIPawn, ARoomAreaBase* Room) {
}

void UAIManagementSystem::PawnEnteringRoom(APawn* AIPawn, ARoomAreaBase* Room) {
}

void UAIManagementSystem::PawnEnteredRoom(APawn* AIPawn, ARoomAreaBase* Room) {
}

void UAIManagementSystem::PauseManager() {
}

void UAIManagementSystem::OnWorldStateChanged(EFNAFGameState NewState, EFNAFGameState OldState) {
}

void UAIManagementSystem::OnVannyPathsCollected() {
}

void UAIManagementSystem::OnPawnEndPlay(AActor* DestroyedPawn, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UAIManagementSystem::OnAIFellOutOfWorld(APawn* AIPawn) {
}

void UAIManagementSystem::OnAIEnvQueryInfoLoaded(TArray<FAssetData> AssetDataList) {
}

void UAIManagementSystem::OnAICharacterInfoLoaded(TArray<FAssetData> AssetDataList) {
}

bool UAIManagementSystem::IsWorldSpawnEnabled() const {
    return false;
}

bool UAIManagementSystem::IsUsingStagedSpawns() const {
    return false;
}

bool UAIManagementSystem::IsSpawningEnabled() const {
    return false;
}

bool UAIManagementSystem::IsRoomOccupied(ARoomAreaBase* Room) const {
    return false;
}

bool UAIManagementSystem::IsRoomBeingEntered(ARoomAreaBase* Room) const {
    return false;
}

bool UAIManagementSystem::IsAITeleportEnabled() const {
    return false;
}

float UAIManagementSystem::GetTimeSinceLastEncounter() const {
    return 0.0f;
}

TMap<APawn*, int32> UAIManagementSystem::GetRoomDistancesToPlayer() const {
    return TMap<APawn*, int32>();
}

ARoomAreaBase* UAIManagementSystem::GetRoomAIPawnIsIn(APawn* AIPawn) const {
    return NULL;
}

ARoomAreaBase* UAIManagementSystem::GetRoomAIPawnIsEntering(APawn* AIPawn) const {
    return NULL;
}

APawn* UAIManagementSystem::GetPawnForType(EFNAFAISpawnType AIType) const {
    return NULL;
}

TSubclassOf<APawn> UAIManagementSystem::GetPawnClassForTypeAndSubType(EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType) const {
    return NULL;
}

TSubclassOf<APawn> UAIManagementSystem::GetPawnClassForType(EFNAFAISpawnType AIType, bool bForceShattered) const {
    return NULL;
}

TScriptInterface<ISeekerPatrolPath> UAIManagementSystem::GetPathForAI(EFNAFAISpawnType AIType, FName PathName) const {
    return NULL;
}

TScriptInterface<ISeekerPatrolPath> UAIManagementSystem::GetPathByNameForAI(FName PathName) const {
    return NULL;
}

TArray<EFNAFAISpawnType> UAIManagementSystem::GetExistingPawnTypes() const {
    return TArray<EFNAFAISpawnType>();
}

APawn* UAIManagementSystem::GetExistingPawn(EFNAFAISpawnType AIType, bool RequireShattered) const {
    return NULL;
}

void UAIManagementSystem::GetCurrentVannyMeterValuesAsPercentage(float& OutCurrentValuePercent, float& OutSoftMaxPercent) const {
}

void UAIManagementSystem::GetCurrentVannyMeterValues(float& CurrentValue, float& Max, float& SoftMax) const {
}

float UAIManagementSystem::GetCurrentVannyMeterPercentage() const {
    return 0.0f;
}

TArray<FAIDistanceResult> UAIManagementSystem::GetCachedDistances() const {
    return TArray<FAIDistanceResult>();
}

void UAIManagementSystem::GetCachedDistanceFor(APawn* Pawn, bool& bOutResultValid, FAIDistanceResult& OutResult) const {
}

TArray<AFNAFAISpawnPoint*> UAIManagementSystem::GetAllSpawnPointsFor(EFNAFAISpawnType AIType) const {
    return TArray<AFNAFAISpawnPoint*>();
}

TArray<AFNAFAISpawnPoint*> UAIManagementSystem::GetAllSpawnPoints() const {
    return TArray<AFNAFAISpawnPoint*>();
}

TArray<APawn*> UAIManagementSystem::GetAllRegisteredAI() const {
    return TArray<APawn*>();
}

void UAIManagementSystem::GetAllAnimatronicPawns(TArray<APawn*>& OutAnimatronicPawns) const {
}

TArray<APawn*> UAIManagementSystem::GetAllAIInRoomAtMost(int32 numRooms) const {
    return TArray<APawn*>();
}

TArray<APawn*> UAIManagementSystem::GetAllAI() const {
    return TArray<APawn*>();
}

TArray<APawn*> UAIManagementSystem::GetAIPawnsWithSightToPlayer() const {
    return TArray<APawn*>();
}

TArray<APawn*> UAIManagementSystem::GetAIPawnsEnteringRoom(ARoomAreaBase* Room) const {
    return TArray<APawn*>();
}

TArray<APawn*> UAIManagementSystem::GetAIPawnInRoom(ARoomAreaBase* Room) const {
    return TArray<APawn*>();
}

AFNAFAISpawnPoint* UAIManagementSystem::FindSpawnPointClosestToDistance(float Distance) const {
    return NULL;
}

void UAIManagementSystem::FindSpawnNotVisibleAtDistance(float Distance, EFNAFAISpawnType SpawnType, APawn* PawnForNavProperties, TArray<AFNAFAISpawnPoint*>& OutSpawnPointsResult, TArray<float>& OutDistances, FLatentActionInfo LatentInfo) {
}

bool UAIManagementSystem::FindRandomPatrolPointOutOfView(EFNAFAISpawnType AIType, TScriptInterface<ISeekerPatrolPath> PatrolPath, FVector& OutLocation) {
    return false;
}

AFNAFAISpawnPoint* UAIManagementSystem::FindFurthestSpawnPoint() const {
    return NULL;
}

AFNAFAISpawnPoint* UAIManagementSystem::FindClosestSpawnPoint() const {
    return NULL;
}

void UAIManagementSystem::FindClosestPatrolPointOutOfView(APawn* AIPawn, bool& bOutResultValid, TScriptInterface<ISeekerPatrolPath>& OutPatrolPath, FVector& OutLocation, FLatentActionInfo LatentActionInfo, int32& OutPointIndex) {
}

void UAIManagementSystem::FindClosestPathPointForAI(APawn* AIPawn, bool& OutResultValid, TScriptInterface<ISeekerPatrolPath>& OutPatrolPath, int32& OutPointIndex, FVector& OutLocation, FLatentActionInfo LatentInfo) {
}

void UAIManagementSystem::ExitedHiding(APawn* AIPawn) {
}

void UAIManagementSystem::DoNotDespawnAIDuringMoonmanPhase(bool bDoNotDestroy) {
}

void UAIManagementSystem::DestroyAllAINotVisible() {
}

void UAIManagementSystem::DestroyAllAIInRoomsAtleast(int32 RoomDist) {
}

void UAIManagementSystem::DestroyAllAI() {
}

void UAIManagementSystem::ClearExpectedAI() {
}

void UAIManagementSystem::CalculateAllAIDistances(TArray<FAIDistanceResult>& DistanceResults, bool& bOutClosestIsValid, int32& ClosestIndex, FLatentActionInfo LatentInfo) {
}

void UAIManagementSystem::ApplySound(float Strength, const FVector& WorldLocation) {
}

void UAIManagementSystem::ApplyCollect(const FVector& WorldLocation) {
}

bool UAIManagementSystem::AnyPawnInPlayerRoom() const {
    return false;
}

void UAIManagementSystem::AISpottedPlayer(APawn* AIPawn) {
}

void UAIManagementSystem::AILostSightOfPlayer(APawn* AIPawn) {
}

void UAIManagementSystem::AdjustVannyMeter(float Amount) {
}

void UAIManagementSystem::AddExpectedAI(FAnimatronicExpectedData AIType) {
}

UAIManagementSystem::UAIManagementSystem() {
    this->EnableDebugCloak = false;
}

