#include "Cell.h"

Cell::Cell(bool condition, Cell_variant variant) :condition(condition), variant(variant)
{
}

Cell::Cell() {
    condition = true;
    variant = Regular;
}

bool Cell::get_condition() {
    return condition;
}

Cell_variant Cell::get_variant() {
    return variant;
}

Entity* Cell::get_entity() {
    return entity;
}



