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
ll n,k,tt;
ll x[200005];
ll dp[200005][6][2]; 
ll riz(int i,int j,int f)
{
  if(i+2*j>k) return 0;
  if(dp[i][j][f]!=-1) return dp[i][j][f];
  ll ans=0;
  if(f==1) ans=x[i]+riz(i+1,j,0);
  else
  {
    ans=max(ans,x[i]+riz(i+1,j,0));
    if(i>0&&j<tt)
    {
      ans=max(ans,x[i]+riz(i-1,j+1,1));
    }
  }
  return dp[i][j][f]=ans;

}


void solve()
{
    cin>>n>>k>>tt;
    fi(i,n,0)cin>>x[i];
    for(int i=0;i<=n;i++)for(int j=0;j<=5;j++)dp[i][j][0]=dp[i][j][1]=-1;
    cout<<riz(0,0,0)<<endl;


  



    
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