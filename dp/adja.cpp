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
int riz(int i,vi &nums,vi &dp)
    {
        
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int p=nums[i]+riz(i-2,nums,dp);
        int np=0+riz(i-1,nums,dp);
        return dp[i]=max(p,np);
    }
ll solv(int i,vi &a,vi &dp)
{
    int n=a.size();
    if(i>=n) return -1e9;
    if(i==n-1) return a[i];
    if(dp[i]!=-1) return dp[i];
    ll p,np;
    p=np=0;
    np=0+solv(i+1,a,dp);
    p=solv(i+2,a,dp)+a[i];
    return dp[i]=max(p,np);

}
void solve()
{
    ll n;cin>>n;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    vi dp(n,-1);
    cout<<solv(0,a,dp);
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
