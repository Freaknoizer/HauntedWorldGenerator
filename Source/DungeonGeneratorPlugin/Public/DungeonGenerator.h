#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileMatrix.h"
#include "FastNoiseLite.h"
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

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FastNoise")
    float NoiseScale = 0.01f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FastNoise")
    int32 NoiseOctaves = 6;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FastNoise")
    float NoisePersistence = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FastNoise")
    float NoiseLacunarity = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FastNoise")
    int32 NoiseSeed = 1337;

private:
    UPROPERTY()
    UTileMatrix* TileMatrix;

    FastNoiseLite NoiseGenerator;
};