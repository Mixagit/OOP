#include "Player.h"

Player::Player(int x, int y, int hp, int damage) :Creature(x, y, hp, damage) {};


void Player::move() {

}

void Player::fight(Enemy& enemy) {
	if (enemy.get_hp() - damage <= 0)
		//delete enemy;
		//enemy.vanish_enemy();
	else enemy.set_hp(enemy.get_hp() - damage);
}

void Player::pick_up_item(Item* item) {
	item->influence_player(this);
}
/*
	if (dynamic_cast<Medkit*>(item) != nullptr) {
		this->hp += item->get_point_hp();
	}

	if (dynamic_cast<Boost*>(item) != nullptr) {
		this->damage += item->get_point_damage();
	}

	if (dynamic_cast<Trap*>(item) != nullptr) {
		this->hp -= item->get_point_hp();
	}
}*/