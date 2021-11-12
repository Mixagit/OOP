#include "Enemy2.h"

void Enemy2::move(Field& f) {
    if (this->y < f.get_height()) {
        this->y++;
    }

    else {
        this->y--;
    }
}