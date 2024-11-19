#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1005;

vector<int> adj[MAXN];

int query(int a, int b) {
    cout << "? " << a << " " << b << endl;
    int res;
    cin >> res;
    return res;
}

void dfs(int u, int p) {
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int center = 1;
        for (int i = 2; i <= n; i++) {
            int res = query(center, i);
            if (res != center) {
                center = res;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (i != center) {
                int res = query(center, i);
                if (res == center) {
                    adj[center].push_back(i);
                } else {
                    adj[res].push_back(i);
                }
            }
        }

        cout << "!";
        for (int i = 1; i <= n; i++) {
            for (int j : adj[i]) {
                if (i < j) {
                    cout << " " << i << " " << j;
                }
            }
        }
        cout << endl;

        for (int i = 1; i <= n; i++) {
            adj[i].clear();
        }
    }

    return 0;
}