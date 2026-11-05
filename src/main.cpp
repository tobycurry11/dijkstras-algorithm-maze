#include "Grid.h"
#include <iostream>

int main() {
    std::cout << "PATHFINDING VISUALISER\n";
    std::cout << "-----------------------\n\n";

    Grid grid(10, 10);

    grid.setStart(0, 0);
    grid.setEnd(9, 9);

    grid.setWall(2, 3);
    grid.setWall(3, 3);
    grid.setWall(6, 7);
    grid.setWall(9, 6);

    grid.print();

    return 0;
}