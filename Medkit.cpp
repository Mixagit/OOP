#include "Medkit.h"

void Medkit::influence_player(Player* p) {
    p->Player::set_hp(p->Player::get_hp() + this->point_hp);
}

int Medkit::get_point_hp() {
    return this->point_hp;
}
