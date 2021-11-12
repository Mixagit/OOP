#include "Field.h"
class Entity {
public:
    virtual void Interact(Entity*) = 0;
    virtual ~Entity() = 0;
};