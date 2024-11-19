#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int MAX_N = 100;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
char dir[] = {'E', 'N', 'W', 'S'};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        int x = 0, y = 0;
        bool vis[MAX_N][MAX_N] = {};
        vis[x][y] = true;

        for (int i = 0; ; i++) {
            int d;
            for (d = 0; d < 4; d++) {
                if (s[i % n] == dir[d]) break;
            }

            x += dx[d];
            y += dy[d];

            if (vis[x][y]) {
                if (x == a && y == b) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
                break;
            }

            vis[x][y] = true;
        }
    }

    return 0;
}