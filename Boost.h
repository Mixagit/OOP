#pragma once
#include "Item.h"

class Boost : public Item {
private:
    int point_damage;
public:
    void influence_player(Player* p);
    int get_point_damage();
};

