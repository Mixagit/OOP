#pragma once
#include "Creature.h"
#include "IEnemy.h"
#include "Field.h"

class Enemy : public Creature, public IEnemy {
protected:
    int hp;
    int damage;
public:
    Enemy(int x, int y, int hp, int damage);

    int get_hp();

    int get_damage();

    void set_hp(int hp);

    void set_damage(int damage);

    void vanish_enemy() {

    }
    // void give_damage(int damage){ // Нанесение урона
    //     if (this->hp < damage){
    //         this->hp = hp + (hp - damage);
    //     }
    // }

    // void take_damage(Enemy& enemy, int damage){ //Получение урона
    //     if(hp < damage){
    //         enemy.hp = hp +(hp - damage);
    //     }
    // }


};

