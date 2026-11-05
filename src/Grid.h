#pragma once // ensures header file is only included once during compilation

#include <vector>

enum class Cell {
    Empty,
    Wall,
    Start,
    End
};

class Grid {
    private:
        int rows;
        int cols;

        std::vector<std::vector<Cell>> cells;

    public:
        Grid(int rows, int cols);

        void setWall(int row, int col);
        void setStart(int row, int col);
        void setEnd(int row, int col);

        bool isValid(int row, int col) const;
        void print() const;
};