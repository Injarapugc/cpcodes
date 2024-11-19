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
    ll n;
    cin >> n;
    vi a(n+1);
    fi(i, n+1, 1) cin >> a[i];
    vi dp(n+1,1);
    ll abns = 0;
    fi(i, n+1, 1) {
        for (int j = 2*i; j <= n; j += i) {
            if (a[j] > a[i]) {
                dp[j] = max(dp[j], dp[i] + 1);
            }
        }
        abns = max(dp[i], abns);
    }
    cout << abns << endl;
}
  
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}


