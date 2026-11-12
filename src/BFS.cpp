#include "BFS.h"
#include <queue>
#include <algorithm>

std::vector<Position> findPathBFS(
    const Grid& grid,
    Position start,
    Position end
) {

    if (!grid.isWalkable(start.row, start.col) ||
        !grid.isWalkable(end.row, end.col)) {
            return {};
        }

        std::queue<Position> frontier;

        std::vector<std::vector<bool>> visited(
            grid.getRows(),
            std::vector<bool>(grid.getCols(), false)
        );

        std::vector<std::vector<Position>> parent(
            grid.getRows(),
            std::vector<Position>(
                grid.getCols(),
                {-1, -1}
            )
        );

        frontier.push(start);
        visited[start.row][start.col] = true;

        // four possible movement directions
        const int rowDirections[] = {-1, 1, 0, 0};
        const int colDirections[] = {0, 0, -1, 1};

        bool foundPath = false;
}