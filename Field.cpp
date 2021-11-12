#include "Field.h"
#include "Cell.h"

Field::Field(size_t width, size_t height) :heigth(heigth), width(width) {
    cells = new Cell * [heigth];
    for (size_t i = 0; i < heigth; i++)
        cells[i] = new Cell[width];
    cells[0][0] = Cell(true, Entrance);
    cells[height - 1][width - 1] = Cell(true, Exit);
}

Field::~Field() {
    for (size_t i = 0; i < heigth; i++)
        delete[] cells[i];
    delete[] cells;
}

Field::Field(const Field& other) :heigth(other.heigth), width(other.width) {
    cells = new Cell * [heigth];
    for (size_t i = 0; i < heigth; i++)
        cells[i] = new Cell[width];
    for (size_t i = 0; i < heigth; i++)
        for (size_t j = 0; j < width; j++)
            cells[i][j] = other.cells[i][j];
}

Field& Field::operator=(const Field& other) {
    if (this != &other) {

        for (size_t i = 0; i < heigth; i++)
            delete[] cells[i];
        delete[] cells;

        heigth = other.heigth;
        width = other.width;

        cells = new Cell * [heigth];
        for (size_t i = 0; i < heigth; i++)
            cells[i] = new Cell[width];

        for (size_t i = 0; i < heigth; i++)
            for (size_t j = 0; j < width; j++)
                cells[i][j] = other.cells[i][j];
    }
    return *this;
}

Field::Field(Field&& other) {
    std::swap(heigth, other.heigth);
    std::swap(width, other.width);
    std::swap(cells, other.cells);
}

Field& Field::operator=(Field&& other) {
    if (this != &other) {
        std::swap(heigth, other.heigth);
        std::swap(width, other.width);
        std::swap(cells, other.cells);
    }
    return *this;
}

size_t Field::get_height() {
    return heigth;
}

size_t Field::get_width() {
    return width;
}

Cell& Field::get_cells(int x, int y) {
    return cells[x][y];
}

// std::ostream& Field::operator<< (std::ostream &out, const Cell& cell){
//     out << cell.variant;
//     return out;
// }

// void Field::print(){
//     for(size_t i = 0; i < heigth; i++){
//         for(size_t j = 0; j < width; j++)
//             std::cout << cells[i][j];
//         std::cout << std::endl;
//     }
//     std::cout << std::endl;
// }





