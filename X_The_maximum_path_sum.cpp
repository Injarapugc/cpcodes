#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    vector<vector<int>> b(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') {
                pq.push({0, {i, j}});
                break;
            }
        }
    }

    int r[] = {1, -1, 0, 0};
    int c[] = {0, 0, -1, 1};
    int ans = 0;

    auto is_valid = [&](int i, int j) {
        return i >= 0 && j >= 0 && i < n && j < m;
    };

    while (!pq.empty()) {
        int x1 = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        if (a[x][y] == '#') {
            ans = x1;
            break;
        }

        b[x][y] = 1;

        for (int i = 0; i < 4; i++) {
            int y1 = x + r[i];
            int y2 = y + c[i];
            if (is_valid(y1, y2) && a[y1][y2] != 'X' && b[y1][y2] == 0) {
                pq.push({x1 + 1, {y1, y2}});
                b[y1][y2] = 1; // Mark visited here instead of inside the loop
            }
        }
    }

    cout << ans;

    return 0;
}
