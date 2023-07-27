#include "TileMatrix.h"

void UTileMatrix::SetSize(int32 Rows, int32 Columns, int32 Floors)
{
    Tiles.Empty();

    for (int32 i = 0; i < Floors; i++)
    {
        TArray<TArray<ETileType>> FloorTiles;

        for (int32 j = 0; j < Rows; j++)
        {
            TArray<ETileType> RowTiles;

            for (int32 k = 0; k < Columns; k++)
            {
                RowTiles.Add(ETileType::Wall);
            }

            FloorTiles.Add(RowTiles);
        }

        Tiles.Add(FloorTiles);
    }
}

void UTileMatrix::SetTileValue(int32 X, int32 Y, int32 Z, ETileType Value)
{
    if (X >= 0 && X < Tiles[0].Num() && Y >= 0 && Y < Tiles[0][0].Num() && Z >= 0 && Z < Tiles.Num())
    {
        Tiles[Z][X][Y] = Value;
    }
}

ETileType UTileMatrix::GetTileValue(int32 X, int32 Y, int32 Z) const
{
    if (X >= 0 && X < Tiles[0].Num() && Y >= 0 && Y < Tiles[0][0].Num() && Z >= 0 && Z < Tiles.Num())
    {
        return Tiles[Z][X][Y];
    }

    return ETileType::Wall;
}

void UTileMatrix::SetRoomSize(int32 MinSize, int32 MaxSize)
{
    MinRoomSize = MinSize;
    MaxRoomSize = MaxSize;
}

const TArray<FRoom>& UTileMatrix::GetRooms() const
{
    return Rooms;
}

void UTileMatrix::SetRooms(const TArray<FRoom>& InRooms)
{
    Rooms = InRooms;
}