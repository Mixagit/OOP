#include "Trap.h"

void Trap::influence_player(Player* p) {
    p->Player::set_hp(p->Player::get_hp() - this->point_hp);
}

int Trap::get_point_hp() {
    return this->point_hp;
}