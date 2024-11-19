#ifdef Icry
#include "debug.h"
#else
#include <bits/stdc++.h>
#define debug(args...) 
#endif

using namespace std;


int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);

      int t; cin >> t;
      while (t--) {
            int sz; cin >> sz;
            string s; cin >> s;
            string s1 = s;
            string s2 = s;
            reverse(s2.begin(), s2.end());
            int n = s1.size(), m = s2.size();
            vector <vector <int>> dp(n + 1, vector <int> (m + 1, 0));
            for (int i = 1; i <= n; ++i) {
                  for (int j = 1; j <= m; ++j) {
                        if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
                        else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                  }
            }
            int ans = 0;
            for (int i = 0; i <= n; ++i) {
                  ans = max(ans, dp[i][m - i]);
            }
            cout << ans << '\n';
      }
}