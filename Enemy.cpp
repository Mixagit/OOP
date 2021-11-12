#include "Enemy.h"

Enemy::Enemy(int x, int y, int hp, int damage) :Creature(x, y, hp, damage) {};


int Enemy::get_hp() {
    return this->hp;
}

int Enemy::get_damage() {
    return this->damage;
}

void Enemy::set_hp(int hp) {
    this->hp = hp;
}

void Enemy::set_damage(int damage) {
    this->damage = damage;
}

void vanish_enemy() {

}