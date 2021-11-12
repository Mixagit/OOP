#include "Creature.h"

Creature::Creature(int x, int y, int hp, int damage) : x(x), y(y), hp(hp), damage(damage) {};

void Creature::move(int x, int y, Entity* e) {

}

void Creature::fight(int x, int y, Entity* e) {

}

void Creature::set_position(int x, int y) {
	this->x = x;
	this->y = y;
}

void Creature::set_hp(int hp) {
	this->hp = hp;
}

void Creature::set_damage(int damage) {
	this->damage = damage;
}

int Creature::get_hp() {
	return this->hp;
}

int Creature::get_damage() {
	return this->damage;
}

int Creature::get_x() {
	return this->x;
}

int Creature::get_y() {
	return this->y;
}