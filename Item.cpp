#include "Item.h"

Item::Item(int x, int y) : x(x), y(y) {};

void Item::set_position(int x, int y) {
	this->x = x;
	this->y = y;
}

int Item::get_x() {
	return this->x;
}

int Item::get_y() {
	return this->y;
}
