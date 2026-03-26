#include "SecurityPuzzleJsonHandler.h"

bool USecurityPuzzleJsonHandler::WriteAllPuzzleDataToFile(TArray<FSecurityNodePuzzle> Puzzles) {
    return false;
}

FString USecurityPuzzleJsonHandler::ReadSecurityNodePuzzleData() {
    return TEXT("");
}

void USecurityPuzzleJsonHandler::GenerateStructsArrayFromJsonStringSecurityNodePuzzle(const FString& JsonString, TArray<FSecurityNodePuzzle>& Puzzles) {
}

USecurityPuzzleJsonHandler::USecurityPuzzleJsonHandler() {
}

