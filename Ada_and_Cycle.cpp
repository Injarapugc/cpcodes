#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Fast I/O
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int MAX_N = 1000; // Adjust as needed
const int inf = INT_MAX;

int n;
vector<int> g[MAX_N + 1];
int dis[MAX_N + 1];
int res[MAX_N + 1];

void bfs(int u) {
    queue<int> q;
    q.push(u);
    for (int i = 1; i <= n; i++)
        dis[i] = inf;
    dis[u] = 0;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (auto &v : g[curr]) {
            if (v == u) {
                res[u] = dis[curr] + 1;
                return;
            }
            if (dis[v] > dis[curr] + 1) {
                q.push(v);
                dis[v] = dis[curr] + 1;
            }
        }
    }
}

signed main() {
    fastio;
    int x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> x;
            if (x) g[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; i++)
        bfs(i);
    for (int i = 1; i <= n; i++) {
        if (!res[i])
            cout << "NO WAY" << endl;
        else
            cout << res[i] << endl;
            
    }
    return 0;
}