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


void solve()
{

    int m, k, a1, ak;
		cin >> m >> k >> a1 >> ak;
		int taken_k = m / k;
		int taken_1 = m % k;
		int taken_fancy_1 = max(0, taken_1 - a1);
		int left_regular_1 = max(0, a1 - taken_1);
		int taken_fancy_k = max(0, taken_k - ak);
		int to_replace = min(left_regular_1 / k, taken_fancy_k);
		int ans = taken_fancy_1 + taken_fancy_k - to_replace;
		cout << ans << endl;
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
