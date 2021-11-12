#pragma once

#include "Entity.h"
#include "IItem.h"
#include "Player.h"

class Item : public IItem, public Entity {
protected:
    int x;
    int y;
public:
    Item(int x, int y);

    void set_position(int x, int y);

    int get_x();

    int get_y();
};
