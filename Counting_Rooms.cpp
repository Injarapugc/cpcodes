#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define fi(i, n, m) for (int i = m; i < n; i++)

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    vector<vector<int>> b(n, vector<int>(m, 0));

    fi(i, n, 0)
    {
        cin >> a[i];
    }

    int ans = 0;

    int r[] = {1, -1, 0, 0};
    int c[] = {0, 0, -1, 1};

    fi(i, n, 0)
    {
        fi(j, m, 0)
        {
            if (a[i][j] == '.' && b[i][j] == 0)
            {
                ans++;
				    queue<pair<int, int>> q;
               
                q.push({i, j});
                while (!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    b[x][y] = 1;
                    for (int k = 0; k < 4; k++)
                    {
                        int x1 = x + r[k], y1 = y + c[k];
                        if (x1 >= 0 && y1 >= 0 && x1 < n && y1 < m && b[x1][y1] == 0 && a[x1][y1] == '.')
                        {
                           
                            b[x1][y1] = 1;
                            q.push({x1, y1});
                        }
                    }
                }
            }
        }
    }
    cout << ans;
}

int main() {
    solve();
    return 0;
}
