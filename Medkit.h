#pragma once
#include "Item.h"

class Medkit : public Item {
private:
    int point_hp;
public:
    void influence_player(Player* p);
    int get_point_hp();
};


