#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;




void solve() {
    string a, b;
    cin >> a >> b;
    int n1 = a.length(), n2 = b.length();
    ll dp[n1 + 1][n2 + 1];

    // Initialize base cases
    for (int i = 0; i <= n1; i++) dp[i][0] = i;
    for (int j = 0; j <= n2; j++) dp[0][j] = j;

    // Fill DP table
    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            if (a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1];
            else dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
        }
    }

    cout << dp[n1][n2];
}
  
int main()
{
  ll t=1;

  while(t--)
  {
    solve();
  }
}
