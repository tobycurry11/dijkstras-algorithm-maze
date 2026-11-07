#pragma once

#include "Grid.h"
#include <vector>

struct Position {
    int row;
    int col;
};

std::vector<Position> findPathBFS(const Grid& grid, Position start, Position end);