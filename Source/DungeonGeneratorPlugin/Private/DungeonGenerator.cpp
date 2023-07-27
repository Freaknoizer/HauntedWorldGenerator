#include "DungeonGenerator.h"

void UDungeonGenerator::GenerateDungeon(int32 Rows, int32 Columns, int32 Floors, int32 RoomCount, float Scale, int32 Octaves, float Persistence, float Lacunarity, int32 Seed)
{
    TileMatrix = NewObject<UTileMatrix>();
    TileMatrix->SetSize(Rows, Columns, Floors);
    TileMatrix->SetRoomSize(5, 10);

    NoiseGenerator.SetSeed(Seed);
    NoiseGenerator.SetFrequency(NoiseScale);
    NoiseGenerator.SetFractalOctaves(NoiseOctaves);
    NoiseGenerator.SetFractalPersistence(NoisePersistence);
    NoiseGenerator.SetFractalLacunarity(NoiseLacunarity);

    for (int32 i = 0; i < Floors; i++)
    {
        for (int32 j = 0; j < Rows; j++)
        {
            for (int32 k = 0; k < Columns; k++)
            {
                float NoiseValue = NoiseGenerator.GetNoise(j, k);
                ETileType TileValue = NoiseValue > 0.5f ? ETileType::Wall : ETileType::Floor;
                TileMatrix->SetTileValue(j, k, i, TileValue);
            }
        }
    }

    TileMatrix->AddRooms();
    TileMatrix->AddBlueprints();
}

UTileMatrix* UDungeonGenerator::GetTileMatrix() const
{
    return TileMatrix;
}