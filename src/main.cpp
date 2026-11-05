#include <iostream>
#include <vector>
#include <string>
#include <chrono>

int main() {
    auto startTime = std::chrono::steady_clock::now();

    std::cout << " PATHFINDING VISUALISER\n";
    std::cout << " -----------------------\n";

    std::cout << "Algorithms: BFS, Dijkstra, A*\n";
    std::cout << "Grid system: Initialising\n";

    const int ROWS = 10;
    const int COLS = 10;

    // 10x10 grid filled with empty cells (0)
    std::vector<std::vector<int>> grid(
        ROWS, std::vector<int>(COLS, 0)
    );

    // start and end positions (2 and 3)
    grid[0][0] = 2;
    grid[ROWS - 1][COLS - 1] = 3;

    // create walls for obstacles (1)
    grid[2][3] = 1;
    grid[3][3] = 1;
    grid[4][3] = 1;
    grid[5][3] = 1;

    // print the grid
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; col++) {
            if (grid[row][col] == 0) {
                std::cout << ". ";
            }
            else if (grid[row][col] == 1) {
                std::cout << "# ";
            }
            else if (grid[row][col] == 2) {
                std::cout << "S ";
            }
            else if (grid[row][col] == 3) {
                std::cout << "E ";
            }
        }

        std::cout << '\n';
    }

    auto endTime = std::chrono::steady_clock::now();
    auto elapsed = std::chrono::duration<double, std::milli>(
        endTime - startTime
    ).count();                            // .count() returns a raw number instead of a duration object
    std::cout << "Time taken: " << elapsed << " ms\n";

    return 0;
}