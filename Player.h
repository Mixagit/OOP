#pragma once
#include "Creature.h"
#include "IItem.h"
#include "Enemy.h"
#include "Item.h"

class Player : public Creature {
private:

public:
	Player(int x, int y, int hp, int damage);


	void move();

	void fight(Enemy& enemy);

	void pick_up_item(Item* item);

	//void pick_up(int x, int y) {
		//if (field->get_cells(x, y).get_entity() == (Entity*)item)
		//for(size_t i = 0; i < field->get_height(); i++)
			//for(size_t j = 0; j < field->get_width(); j++)
	//}
};
