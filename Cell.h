#pragma once
#include "Entity.h"

enum Cell_variant {
    Regular,
    Entrance,
    Exit,
};

class Cell {
public:
    Cell(bool condition, Cell_variant variant);
    Cell();
    bool get_condition();
    Cell_variant get_variant();
    Entity* get_entity();
private:
    bool condition; //passable, impassable
    Cell_variant variant;
    Entity* entity;
};


