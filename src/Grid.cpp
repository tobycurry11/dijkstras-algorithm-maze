#include "Grid.h"
#include <iostream>
#include <stdexcept> // defines exception classes for error handling

Grid::Grid(int rows, int cols)
        : rows(rows), cols(cols),
        cells(rows, std::vector<Cell>(cols, Cell::Empty)) {
            if (rows <= 0 || cols <= 0) {
                throw std::invalid_argument("Grid dimensions must be positive");
        }
}

bool Grid::isValid(int row, int col) const {
    return row >= 0 && row < rows &&
            col >= 0 && col < cols;
}

void Grid::setWall(int row, int col) {
    if (isValid(row, col)) {
        cells[row][col] = Cell::Wall;
    }
}

void Grid::setStart(int row, int col) {
    if (isValid(row, col)) {
        cells[row][col] = Cell::Start;
    }
}

void Grid::setEnd(int row, int col) {
    if (isValid(row, col)) {
        cells[row][col] = Cell::End;
    }
}

void Grid::print() const {
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            switch (cells[row][col]) {
                case Cell::Empty:
                    std::cout << ". ";
                    break;
                case Cell::Wall:
                    std::cout << "# ";
                    break;
                case Cell::Start:
                    std::cout << "S ";
                    break;
                case Cell::End:
                    std::cout << "E ";
                    break;
            }
        }

        std::cout << '\n';
    }
}
