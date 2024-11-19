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
    ll n;
    cin>>n;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    vi dp(n+1);
    dp[n]=0;
    for(int i=n-1;i>=0;i--)
    {
        dp[i]=dp[i+1]+1;
        if(a[i]+1+i<=n)dp[i]=min(dp[i],dp[a[i]+1+i]);

    }
    cout<<dp[0]<<endl;
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
