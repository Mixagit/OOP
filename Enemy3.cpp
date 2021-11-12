#include "Enemy3.h"

void Enemy3::move(Field& f) {
    if (this->x < f.get_width() && this->y < f.get_height()) {
        this->x++;
        this->y++;
    }

    else {
        this->x--;
        this->y--;
    }
}