#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileMatrix.generated.h"

UENUM(BlueprintType)
enum class ETileType : uint8
{
    Wall,
    Floor
};

USTRUCT(BlueprintType)
struct FRoom
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    int32 X;

    UPROPERTY(BlueprintReadWrite)
    int32 Y;

    UPROPERTY(BlueprintReadWrite)
    int32 Width;

    UPROPERTY(BlueprintReadWrite)
    int32 Height;
};

UCLASS(BlueprintType)
class DUNGEONGENERATORPLUGIN_API UTileMatrix : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    void SetSize(int32 Rows, int32 Columns, int32 Floors);

    UFUNCTION(BlueprintCallable)
    void SetTileValue(int32 X, int32 Y, int32 Z, ETileType Value);

    UFUNCTION(BlueprintCallable)
    ETileType GetTileValue(int32 X, int32 Y, int32 Z) const;

    UFUNCTION(BlueprintCallable)
    void SetRoomSize(int32 MinSize, int32 MaxSize);

    UFUNCTION(BlueprintCallable)
    const TArray<FRoom>& GetRooms() const;

    UFUNCTION(BlueprintCallable)
    void SetRooms(const TArray<FRoom>& Rooms);

private:
    TArray<TArray<TArray<ETileType>>> Tiles;
    TArray<FRoom> Rooms;
    int32 MinRoomSize = 5;
    int32 MaxRoomSize = 10;
};