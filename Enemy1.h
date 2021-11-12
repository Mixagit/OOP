#pragma once
#include "Enemy.h"

class Enemy1 : public Enemy {
public:
    //Enemy1(int x, int y, int hp, int damage):Creature(x, y, hp, damage){};

    void move(Field& f);

};

