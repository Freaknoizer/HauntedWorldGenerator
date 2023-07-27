#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileMatrix.h"
#include "DungeonGenerator.generated.h"

UCLASS(BlueprintType)
class DUNGEONGENERATORPLUGIN_API UDungeonGenerator : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    void GenerateDungeon(int32 Rows, int32 Columns, int32 Floors, int32 RoomCount, float Scale, int32 Octaves, float Persistence, float Lacunarity, int32 Seed);

    UFUNCTION(BlueprintCallable)
    UTileMatrix* GetTileMatrix() const;

private:
    UPROPERTY()
    UTileMatrix* TileMatrix;
};