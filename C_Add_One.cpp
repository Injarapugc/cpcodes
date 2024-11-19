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
 ll g=2e5+5;
    vector<vector<ll>> dp(g,vector<ll>(10,0));

void solve()
{
  
   
    fi(i,10,0) dp[0][i]=1;
    for(int i=1;i<g;i++)
    {
        for(int j=0;j<=8;j++)
        {
            if(j<9) dp[i][j]=dp[i-1][j+1];
        }
        dp[i][9]=(dp[i-1][0]+dp[i-1][1])%mod;

    }
     
}
  
int main()
{
  ll t;
  cin>>t;
  solve();
  while(t--)
  {
      string f;
      cin>>f;
      ll m;
      cin>>m;
      ll ans=0;
      for(auto i:f)
      {
         ans=(ans+dp[m][i-'0'])%mod;

      }
      cout<<ans<<endl;
  }
    
  
}