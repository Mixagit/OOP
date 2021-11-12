#include "Boost.h"

void Boost::influence_player(Player* p) {
    p->Player::set_damage(p->Player::get_damage() + this->point_damage);
}

int Boost::get_point_damage() {
    return this->point_damage;
}