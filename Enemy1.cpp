#include "Enemy1.h"

void Enemy1::move(Field& f) {
    if (this->x < f.get_width()) {
        this->x++;
    }

    else {
        this->x--;
    }
}