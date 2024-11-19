#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
#define mod 1000000007
int solve(int i,vector<int> &dp,vector<int> &a,int k)
{
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int m=INT_MAX;
    for(int j=1;j<=k;j++)
    {
        if(i-j>=0)
        {
            int ans=solve(i-j,dp,a,k)+abs(a[i]-a[i-1]);
            m=min(ans,m);
        }
    }
    dp[i]=m;

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