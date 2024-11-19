#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
ll mod=1000000000;
int sol(vector<ll> &a,vector<vector<ll>> &dp,int s,int i)
{
    if(i<0)
    {
        return 0;
    }
    if(s<=0)
    {
        if(s==0) return 1;
        return 0;
    }
    if(dp[i][s]!=-1) return dp[i][s];
    int l=sol(a,dp,s-a[i],i);
    int r=sol(a,dp,s,i-1);
    return dp[i][s]=(l+r)%mod;
}
 
int main()
{
  ll n,k;
  cin>>n>>k;
  vector<ll> a(n);
  vector<vector<ll>> dp(n,vector<ll>(k+1,-1));
  for(auto &x:a)cin>>x;
  cout<<sol(a,dp,k,n-1);
}