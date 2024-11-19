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
   ll n,c;
   cin>>n>>c;
   vi a(n);
   vi b(n);
   for(int i=0;i<n-1;i++)cin>>a[i];
   for(int i=0;i<n-1;i++)cin>>b[i];
   vector<vector<ll>> dp(n,vector<ll>(2,0));
   dp[0][0]=0;
   dp[0][1]=c;
   cout<<0<<" ";

  fi(i,n,1)
  {
    dp[i][0]=min(dp[i-1][0]+a[i-1],dp[i-1][1]+a[i-1]);
    dp[i][1]=min(dp[i-1][0]+c,dp[i-1][1])+b[i-1];
    cout<<min(dp[i][0],dp[i][1])<<" ";

  }

  
   }
  
int main()
{
  ll t;
  t=1;
  while(t--)
  {
    solve();
  }
}
