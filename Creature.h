#include "Entity.h"
#include "Movable.h"
class Creature : public Entity, public Movable {
protected:
	int x;
	int y;
	int hp;
	int damage;
public:
	Creature(int x, int y, int hp, int damage);

	void move(int x, int y, Entity* e);

	void fight(int x, int y, Entity* e);

	void set_position(int x, int y);

	void set_hp(int hp);

	void set_damage(int damage);

	int get_hp();

	int get_damage();

	int get_x();

	int get_y();
};