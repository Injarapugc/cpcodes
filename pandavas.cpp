#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool isValidMove(int i, int j, int n) {
    return 0 <= i && i < n && 0 <= j && j < n;
}

int dfs(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int i, int j, int n) {
    if (!isValidMove(i, j, n) || visited[i][j] || matrix[i][j] == 1) {
        return 0;
    }

    visited[i][j] = true;
    int count = 1;

    // Explore all four directions
    count += dfs(matrix, visited, i + 1, j, n);
    count += dfs(matrix, visited, i - 1, j, n);
    count += dfs(matrix, visited, i, j + 1, n);
    count += dfs(matrix, visited, i, j - 1, n);

    return count;
}

vector<int> findRiverCells(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<int> riverCellCounts;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0 && !visited[i][j]) {
                int riverCellCount = dfs(matrix, visited, i, j, n);
                riverCellCounts.push_back(riverCellCount);
            }
        }
    }

    return riverCellCounts;
}

int minimizeBridgeCost(int N, vector<vector<int>>& landMatrix) {
    vector<int> riverCellCounts = findRiverCells(landMatrix);
    return accumulate(riverCellCounts.begin(), riverCellCounts.end(), 0) - *max_element(riverCellCounts.begin(), riverCellCounts.end());
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> landMatrix(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> landMatrix[i][j];
        }
    }

    int result = minimizeBridgeCost(N, landMatrix);
    cout << result << endl;

    return 0;
}
