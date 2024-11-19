// Practice makes perfect !!
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x.size())
#define int long long
typedef long long ll;
typedef string str;
int n, dp[5005][5005][2];
vector<int> v;
int solve(int i=0, int j=n-1, int t=1) {
    if (i > j) return 0;
    auto &ret = dp[i][j][t];
    if (~ret) return ret;
    if (t) ret = max(solve(i+1, j, !t) + v[i], solve(i, j-1, !t) + v[j]);
    else ret = min(solve(i+1, j, !t), solve(i, j-1, !t));
    return ret;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n;
    v = vector<int>(n);
    for (auto &it : v) cin >> it;
    memset(dp, -1, sizeof dp);
    cout << solve();

    return 0;
}
