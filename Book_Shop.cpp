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
int a[1005],b[1005];
int dp[1000][100001];
  int n,k;
  
void solve()    
{
     ll s;
  cin>>n>>s;
  fi(i,n+1,1)cin>>a[i];
  fi(i,n+1,1)cin>>b[i];
  memset(dp,sizeof(dp),0);
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=s;j++)
    {
      dp[i][j]=dp[i-1][j];
      if(j>=a[i])
      dp[i][j]=max(dp[i][j],b[i]+dp[i-1][j-a[i]]);
 
    }
  }
  cout<<dp[n][s];
 
 
 
    
}
int main()
{
  
    solve();
 
}
