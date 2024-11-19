#include <iostream>
#include <cmath>
using namespace std;

int minSteps(int currentX, int currentY, int targetX, int targetY) {
    // Base case: if the current position is the target position
    if (currentX == targetX && currentY == targetY) {
        return 0;
    }

    // Initialize with a large value as infinity
    int result = 1e9;

    // Define all possible moves
    int moves[8][2] = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1},
                       {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};

    // Try each possible move
    for (int i = 0; i < 8; i++) {
        int newX = currentX + moves[i][0];
        int newY = currentY + moves[i][1];

        // Recursive call only if the new position is within the board
        if (abs(newX) <= 200 && abs(newY) <= 200) {
            result = min(result, 1 + minSteps(newX, newY, targetX, targetY));
        }
    }

    return result;
}

int main() {
    int m, n;
    cin >> m >> n;

    // Start DFS from position (0, 0)
    int result = minSteps(0, 0, m, n);

    if (result != 1e9) {
        cout << "Minimum number of steps: " << result << endl;
    } else {
        cout << "Target position is not reachable." << endl;
    }

    return 0;
}
