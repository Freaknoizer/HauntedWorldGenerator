#include "DungeonGenerator.h"
#include "FastNoiseLite.h"

DEFINE_LOG_CATEGORY(DungeonGenerator);

ADungeonGenerator::ADungeonGenerator()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADungeonGenerator::GenerateDungeon(float RoomShapeBalance)
{
    // Generate the dungeon layout
    DungeonLayout.GenerateLayout();

    // Generate the dungeon rooms
    GenerateRooms(RoomShapeBalance);

    // Generate the dungeon corridors
    GenerateCorridors();

    // Generate the dungeon walls
    GenerateWalls();

    // Generate the dungeon doors
    GenerateDoors();

    // Generate the dungeon stairs
    GenerateStairs();

    // Generate the dungeon props
    GenerateProps();

    // Generate the dungeon enemies
    GenerateEnemies();

    // Generate the dungeon items
    GenerateItems();

    // Generate the dungeon lighting
    GenerateLighting();
}

void ADungeonGenerator::GenerateRooms(float RoomShapeBalance)
{
    FastNoiseLite Noise;
    Noise.SetNoiseType(NoiseType);
    Noise.SetFrequency(Frequency);
    Noise.SetAmplitude(Amplitude);
    Noise.SetFractalOctaves(Octaves);

    for (const FTileMatrix::FRoomSpawnPoint& RoomSpawnPoint : DungeonLayout.GetRoomSpawnPoints())
    {
        const FRoomTemplate& RoomTemplate = RoomTemplates[RoomSpawnPoint.RoomTemplateIndex];

        // Generate a random shape for the room
        float RandomValue = Noise.GetNoise(RoomSpawnPoint.Location.X, RoomSpawnPoint.Location.Y, RoomSpawnPoint.Location.Z);
        bool bIsHexagonal = RandomValue < RoomShapeBalance;

        if (bIsHexagonal)
        {
            const FHexagonalRoomTemplate& HexagonalRoomTemplate = HexagonalRoomTemplates[RoomSpawnPoint.RoomTemplateIndex];
            SpawnHexagonalRoom(HexagonalRoomTemplate, RoomSpawnPoint, HexagonalRoomTileSize, Noise);
        }
        else
        {
            // Generate a random size for the room
            float RoomSize = FMath::Lerp(RoomTemplate.MinSize, RoomTemplate.MaxSize, RandomValue);

            // Spawn the room with the random size
            SpawnRoom(RoomTemplate, RoomSpawnPoint, RoomSize);
        }
    }
}

void ADungeonGenerator::GenerateCorridors()
{
    for (const FTileMatrix::FCorridorSpawnPoint& CorridorSpawnPoint : DungeonLayout.GetCorridorSpawnPoints())
    {
        SpawnCorridor(CorridorSpawnPoint);
    }
}

void ADungeonGenerator::GenerateWalls()
{
    for (const FTileMatrix::FWallSpawnPoint& WallSpawnPoint : DungeonLayout.GetWallSpawnPoints())
    {
        // Determine whether the wall is facing along the X or Y axis
        bool bWallFacingXProperty = WallSpawnPoint.Location.X % 2 == 0;

        SpawnWall(WallSpawnPoint, bWallFacingXProperty);
    }
}

void ADungeonGenerator::GenerateDoors()
{
    for (const FTileMatrix::FDoorSpawnPoint& DoorSpawnPoint : DungeonLayout.GetDoorSpawnPoints())
    {
        SpawnDoor(DoorSpawnPoint);
    }
}

void ADungeonGenerator::GenerateStairs()
{
    for (const FTileMatrix::FStairSpawnPoint& StairSpawnPoint : DungeonLayout.GetStairSpawnPoints())
    {
        SpawnStair(StairSpawnPoint);
    }
}

void ADungeonGenerator::GenerateProps()
{
    for (const FPropTemplate& PropTemplate : RoomTemplates[0].PropTemplates)
    {
        for (const FTileMatrix::FPropSpawnPoint& PropSpawnPoint : DungeonLayout.GetPropSpawnPoints(PropTemplate.PropType))
        {
            SpawnProp(PropTemplate, PropSpawnPoint);
        }
    }
}

void ADungeonGenerator::GenerateEnemies()
{
    for (const FEnemyTemplate& EnemyTemplate : RoomTemplates[0].EnemyTemplates)
    {
        for (const FTileMatrix::FEnemySpawnPoint& EnemySpawnPoint : DungeonLayout.GetEnemySpawnPoints(EnemyTemplate.EnemyType))
        {
            SpawnEnemy(EnemyTemplate, EnemySpawnPoint);
        }
    }
}

void ADungeonGenerator::GenerateItems()
{
    for (const FItemTemplate& ItemTemplate : RoomTemplates[0].ItemTemplates)
    {
        for (const FTileMatrix::FItemSpawnPoint& ItemSpawnPoint : DungeonLayout.GetItemSpawnPoints(ItemTemplate.ItemType))
        {
            SpawnItem(ItemTemplate, ItemSpawnPoint);
        }
    }
}

void ADungeonGenerator::GenerateLighting()
{
    // TODO: Implement dungeon lighting
}

void ADungeonGenerator::SpawnRoom(const FRoomTemplate& RoomTemplate, const FTileMatrix::FRoomSpawnPoint& RoomSpawnPoint, float RoomSize)
{
    // Calculate the room bounds
    FIntRect RoomBounds = FIntRect(RoomSpawnPoint.Location.X - RoomSize / 2, RoomSpawnPoint.Location.Y - RoomSize / 2, RoomSpawnPoint.Location.X + RoomSize / 2, RoomSpawnPoint.Location.Y + RoomSize / 2);

    // Spawn the room tiles
    for (int32 X = RoomBounds.Min.X; X <= RoomBounds.Max.X; X++)
    {
        for (int32 Y = RoomBounds.Min.Y; Y <= RoomBounds.Max.Y; Y++)
        {
            FTileMatrix::FTileSpawnPoint TileSpawnPoint;
            TileSpawnPoint.Location = FVector(X, Y, RoomSpawnPoint.Location.Z);
            TileSpawnPoint.TileTemplateIndex = RoomTemplate.TileTemplateIndex;

            DungeonLayout.SpawnTile(TileSpawnPoint);
        }
    }
}

void ADungeonGenerator::SpawnHexagonalRoom(const FHexagonalRoomTemplate& RoomTemplate, const FTileMatrix::FHexagonalRoomSpawnPoint& RoomSpawnPoint, float RoomSize, FastNoiseLite& Noise)
{
    // Calculate the room bounds
    FIntRect RoomBounds = FIntRect(RoomSpawnPoint.Location.X - RoomSize / 2, RoomSpawnPoint.Location.Y - RoomSize / 2, RoomSpawnPoint.Location.X + RoomSize / 2, RoomSpawnPoint.Location.Y + RoomSize / 2);

    // Spawn the room tiles
    for (int32 X = RoomBounds.Min.X; X <= RoomBounds.Max.X; X++)
    {
        for (int32 Y = RoomBounds.Min.Y; Y <= RoomBounds.Max.Y; Y++)
        {
            // Calculate the distance from the center of the hexagon
            float DistanceFromCenter = FMath::Sqrt(FMath::Pow(X - RoomSpawnPoint.Location.X, 2) + FMath::Pow(Y - RoomSpawnPoint.Location.Y, 2));

            // Check if the tile is within the hexagon
            if (DistanceFromCenter <= RoomSize / 2)
            {
                FTileMatrix::FTileSpawnPoint TileSpawnPoint;
                TileSpawnPoint.Location = FVector(X, Y, RoomSpawnPoint.Location.Z);
                TileSpawnPoint.TileTemplateIndex = RoomTemplate.TileTemplateIndex;

                DungeonLayout.SpawnTile(TileSpawnPoint);
            }
        }
    }

    // Spawn the hexagonal room props
    for (const FPropTemplate& PropTemplate : RoomTemplate.PropTemplates)
    {
        for (const FTileMatrix::FPropSpawnPoint& PropSpawnPoint : DungeonLayout.GetPropSpawnPoints(PropTemplate.PropType))
        {
            // Check if the prop is within the hexagon
            float DistanceFromCenter = FMath::Sqrt(FMath::Pow(PropSpawnPoint.Location.X - RoomSpawnPoint.Location.X, 2) + FMath::Pow(PropSpawnPoint.Location.Y - RoomSpawnPoint.Location.Y, 2));
            if (DistanceFromCenter <= RoomSize / 2)
            {
                SpawnProp(PropTemplate, PropSpawnPoint);
            }
        }
    }

    // Spawn the hexagonal room enemies
    for (const FEnemyTemplate& EnemyTemplate : RoomTemplate.EnemyTemplates)
    {
        for (const FTileMatrix::FEnemySpawnPoint& EnemySpawnPoint : DungeonLayout.GetEnemySpawnPoints(EnemyTemplate.EnemyType))
        {
            // Check if the enemy is within the hexagon
            float DistanceFromCenter = FMath::Sqrt(FMath::Pow(EnemySpawnPoint.Location.X - RoomSpawnPoint.Location.X, 2) + FMath::Pow(EnemySpawnPoint.Location.Y - RoomSpawnPoint.Location.Y, 2));
            if (DistanceFromCenter <= RoomSize / 2)
            {
                SpawnEnemy(EnemyTemplate, EnemySpawnPoint);
            }
        }
    }

    // Spawn the hexagonal room items
    for (const FItemTemplate& ItemTemplate : RoomTemplate.ItemTemplates)
    {
        for (const FTileMatrix::FItemSpawnPoint& ItemSpawnPoint : DungeonLayout.GetItemSpawnPoints(ItemTemplate.ItemType))
        {
            // Check if the item is within the hexagon
            float DistanceFromCenter = FMath::Sqrt(FMath::Pow(ItemSpawnPoint.Location.X - RoomSpawnPoint.Location.X, 2) + FMath::Pow(ItemSpawnPoint.Location.Y - RoomSpawnPoint.Location.Y, 2));
            if (DistanceFromCenter <= RoomSize / 2)
            {
                SpawnItem(ItemTemplate, ItemSpawnPoint);
            }
        }
    }
}

void ADungeonGenerator::SpawnCorridor(const FTileMatrix::FCorridorSpawnPoint& CorridorSpawnPoint)
{
    // Spawn the corridor tiles
    for (int32 X = CorridorSpawnPoint.StartLocation.X; X <= CorridorSpawnPoint.EndLocation.X; X++)
    {
        for (int32 Y = CorridorSpawnPoint.StartLocation.Y; Y <= CorridorSpawnPoint.EndLocation.Y; Y++)
        {
            FTileMatrix::FTileSpawnPoint TileSpawnPoint;
            TileSpawnPoint.Location = FVector(X, Y, CorridorSpawnPoint.StartLocation.Z);
            TileSpawnPoint.TileTemplateIndex = CorridorSpawnPoint.TileTemplateIndex;

            DungeonLayout.SpawnTile(TileSpawnPoint);
        }
    }
}

void ADungeonGenerator::SpawnWall(const FTileMatrix::FWallSpawnPoint& WallSpawnPoint, bool bWallFacingXProperty)
{
    // Determine the wall pivot offset
    FVector WallPivotOffsetOverride = HexagonalRoomPivotOffset;
    if (!bWallFacingXProperty)
    {
        WallPivotOffsetOverride = FVector(HexagonalRoomPivotOffset.Y, HexagonalRoomPivotOffset.X, HexagonalRoomPivotOffset.Z);
    }

    // Determine the wall rotation
    FVector LocationOffset;
    FRotator WallRotation = CalculateWallRotation(bWallFacingXProperty, WallSpawnPoint, WallPivotOffsetOverride, LocationOffset);

    // Spawn the wall tiles
    for (int32 TileIndex = 0; TileIndex < WallSpawnPoint.Length; TileIndex++)
    {
        FTileMatrix::FTileSpawnPoint TileSpawnPoint;
        TileSpawnPoint.Location = WallSpawnPoint.StartLocation + LocationOffset + (bWallFacingXProperty ? FVector(TileIndex, 0, 0) : FVector(0, TileIndex, 0));
        TileSpawnPoint.TileTemplateIndex = WallSpawnPoint.TileTemplateIndex;

        DungeonLayout.SpawnTile(TileSpawnPoint, WallRotation);
    }
}

void ADungeonGenerator::SpawnDoor(const FTileMatrix::FDoorSpawnPoint& DoorSpawnPoint)
{
    // Spawn the door tiles
    for (int32 X = DoorSpawnPoint.StartLocation.X; X <= DoorSpawnPoint.EndLocation.X; X++)
    {
        for (int32 Y = DoorSpawnPoint.StartLocation.Y; Y <= DoorSpawnPoint.EndLocation.Y; Y++)
        {
            FTileMatrix::FTileSpawnPoint TileSpawnPoint;
            TileSpawnPoint.Location = FVector(X, Y, DoorSpawnPoint.StartLocation.Z);
            TileSpawnPoint.TileTemplateIndex = DoorSpawnPoint.TileTemplateIndex;

            DungeonLayout.SpawnTile(TileSpawnPoint);
        }
    }
}

void ADungeonGenerator::SpawnStair(const FTileMatrix::FStairSpawnPoint& StairSpawnPoint)
{
    // Spawn the stair tiles
    for (int32 X = StairSpawnPoint.StartLocation.X; X <= StairSpawnPoint.EndLocation.X; X++)
    {
        for (int32 Y = StairSpawnPoint.StartLocation.Y; Y <= StairSpawnPoint.EndLocation.Y; Y++)
        {
            FTileMatrix::FTileSpawnPoint TileSpawnPoint;
            TileSpawnPoint.Location = FVector(X, Y, StairSpawnPoint.StartLocation.Z + (X - StairSpawnPoint.StartLocation.X) + (Y - StairSpawnPoint.StartLocation.Y));
            TileSpawnPoint.TileTemplateIndex = StairSpawnPoint.TileTemplateIndex;

            DungeonLayout.SpawnTile(TileSpawnPoint);
        }
    }
}

void ADungeonGenerator::SpawnProp(const FPropTemplate& PropTemplate, const FTileMatrix::FPropSpawnPoint& PropSpawnPoint)
{
    FTileMatrix::FTileSpawnPoint TileSpawnPoint;
    TileSpawnPoint.Location = PropSpawnPoint.Location;
    TileSpawnPoint.TileTemplateIndex = PropTemplate.TileTemplateIndex;

    DungeonLayout.SpawnTile(TileSpawnPoint);
}

void ADungeonGenerator::SpawnEnemy(const FEnemyTemplate& EnemyTemplate, const FTileMatrix::FEnemySpawnPoint& EnemySpawnPoint)
{
    FTileMatrix::FTileSpawnPoint TileSpawnPoint;
    TileSpawnPoint.Location = EnemySpawnPoint.Location;
    TileSpawnPoint.TileTemplateIndex = EnemyTemplate.TileTemplateIndex;

    DungeonLayout.SpawnTile(TileSpawnPoint);
}

void ADungeonGenerator::SpawnItem(const FItemTemplate& ItemTemplate, const FTileMatrix::FItemSpawnPoint& ItemSpawnPoint)
{
    FTileMatrix::FTileSpawnPoint TileSpawnPoint;
    TileSpawnPoint.Location = ItemSpawnPoint.Location;
    TileSpawnPoint.TileTemplateIndex = ItemTemplate.TileTemplateIndex;

    DungeonLayout.SpawnTile(TileSpawnPoint);
}

float ADungeonGenerator::CalculateFloorTileSize(const UStaticMesh& Mesh) const
{
    FVector MeshBounds = Mesh.GetBoundingBox().GetSize();
    float MaxDimension = FMath::Max3(MeshBounds.X, MeshBounds.Y, MeshBounds.Z);

    return MaxDimension / 100.0f;
}

FRotator ADungeonGenerator::CalculateWallRotation(bool bWallFacingXProperty, const FTileMatrix::FWallSpawnPoint& WallSpawnPoint, const FVector& WallPivotOffsetOverride, FVector& LocationOffset) const
{
    // Determine the wall rotation
    FRotator WallRotation = FRotator(0, bWallFacingXProperty ? 90 : 0, 0);

    // Determine the wall location offset
    LocationOffset = FVector(0, 0, -CalculateFloorTileSize(*WallSpawnPoint.Mesh) / 2) + WallPivotOffsetOverride;

    return WallRotation;
}