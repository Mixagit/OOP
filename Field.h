#pragma once
#include "Cell.h"

#include <iostream>


class Field {
public:
    Field(size_t width, size_t height);
    ~Field();
    Field(const Field& other);
    Field& operator=(const Field& other);
    Field(Field&& other);
    Field& operator=(Field&& other);
    size_t get_height();
    size_t get_width();
    Cell& get_cells(int x, int y);
    //std::ostream& operator<< (std::ostream &out, const Cell& cell);
    void print();
private:
    size_t heigth;
    size_t width;
    Cell** cells;
};