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
const ll k=105;
const ll f=1005;
ll dp1[k];
ll dp[k];
ll v1,v2,d,tmc;
/***
ll riz(ll i,ll j)
{
    if(i==1)
    {
        if(j==v1) return v1;
        return -1e9;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    ll ans=-1e9;
    for(ll s=j-d;s<=j+d;s++)
    {
        if(s>=0 and s<k)
        {
            ans=max(ans,riz(i-1,s));
        }

    }
    ans+=j;
    return dp[i][j]=ans;
}
void solve1()
{
    cin>>v1>>v2;
    cin>>tmc>>d;
    memset(dp,-1,sizeof(dp));
    int ans=riz(tmc,v2);
    cout<<ans<<endl;

    
  


    
}
***/
void solve()
{
    int v1,v2,t,d;
    cin>>v1>>v2>>t>>d;
    
    dp[1]=v1;
    for(int i=2;i<=t;i++)dp[i]=dp[i-1]+d;
    dp1[t]=v2;
    for(int i=t-1;i>=1;i--)dp1[i]=dp1[i+1]+d;
    
    int ans=0;
    for(int i=1;i<=t;i++)ans+=min(dp[i],dp1[i]);
    cout<<ans<<endl;
}
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}