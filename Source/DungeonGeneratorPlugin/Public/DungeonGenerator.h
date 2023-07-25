#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DungeonGenerator.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(DungeonGenerator, Log, All);

UCLASS()
class MYPROJECT_API ADungeonGenerator : public AActor
{
    GENERATED_BODY()

public:
    ADungeonGenerator();

    UFUNCTION(BlueprintCallable, Category = "Dungeon Generation")
    void GenerateDungeon(float RoomShapeBalance);

protected:
    UPROPERTY(EditAnywhere, Category = "Dungeon Generation")
    UStaticMesh* HexagonalRoomMesh;

    UPROPERTY(EditAnywhere, Category = "Dungeon Generation")
    UMaterialInterface* HexagonalRoomMaterialOverride;

    UPROPERTY(EditAnywhere, Category = "Dungeon Generation")
    FVector HexagonalRoomPivotOffset;

    UPROPERTY(EditAnywhere, Category = "Dungeon Generation")
    float HexagonalRoomTileSize;

    UPROPERTY(EditAnywhere, Category = "Dungeon Generation")
    float Frequency;

    UPROPERTY(EditAnywhere, Category = "Dungeon Generation")
    float Amplitude;

    UPROPERTY(EditAnywhere, Category = "Dungeon Generation")
    int32 Octaves;

    UPROPERTY(EditAnywhere, Category = "Dungeon Generation")
    ENoiseType NoiseType;

    float CalculateFloorTileSize(const UStaticMesh& Mesh) const;
    FRotator CalculateWallRotation(bool bWallFacingXProperty, const FTileMatrix::FWallSpawnPoint& WallSpawnPoint, const FVector& WallPivotOffsetOverride, FVector& LocationOffset) const;

private:

    FTileMatrix DungeonLayout;
    TArray<FRoomTemplate> RoomTemplates;
    TArray<FHexagonalRoomTemplate> HexagonalRoomTemplates;

    void GenerateRooms(float RoomShapeBalance);
    void GenerateCorridors();
    void GenerateWalls();
    void GenerateDoors();
    void GenerateStairs();
    void GenerateProps();
    void GenerateEnemies();
    void GenerateItems();
    void GenerateLighting();

    void SpawnRoom(const FRoomTemplate& RoomTemplate, const FTileMatrix::FRoomSpawnPoint& RoomSpawnPoint, float RoomSize);
    void SpawnHexagonalRoom(const FHexagonalRoomTemplate& RoomTemplate, const FTileMatrix::FHexagonalRoomSpawnPoint& RoomSpawnPoint, float RoomSize, FastNoiseLite& Noise);
    void SpawnCorridor(const FTileMatrix::FCorridorSpawnPoint& CorridorSpawnPoint);
    void SpawnWall(const FTileMatrix::FWallSpawnPoint& WallSpawnPoint, bool bWallFacingXProperty);
    void SpawnDoor(const FTileMatrix::FDoorSpawnPoint& DoorSpawnPoint);
    void SpawnStair(const FTileMatrix::FStairSpawnPoint& StairSpawnPoint);
    void SpawnProp(const FPropTemplate& PropTemplate, const FTileMatrix::FPropSpawnPoint& PropSpawnPoint);
    void SpawnEnemy(const FEnemyTemplate& EnemyTemplate, const FTileMatrix::FEnemySpawnPoint& EnemySpawnPoint);
    void SpawnItem(const FItemTemplate& ItemTemplate, const FTileMatrix::FItemSpawnPoint& ItemSpawnPoint);
};