#pragma once
#include "GameActor.h"
class Item:
    public GameActor
{
public:
    Item(Texture* _textura, Tile* _tileActual);
    void setTileActual(Tile* _tileNuevo);
};
