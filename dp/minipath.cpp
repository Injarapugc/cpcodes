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

int gg( vector<vector<int>> &a, vector<vector<int>> &dp,int i,int j)
{
    if(i<0||j<0) return 1e9;
    int n=a.size();
    if(i==n-1&&j==n-1) return a[i][j];
    if(i>=n||j>=n) return 1e9;
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=a[i][j]+min(gg(a,dp,i+1,j),gg(a,dp,i,j+1));


}
void solve()
{
    ll n;cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    fi(i,n,0)fi(j,n,0)cin>>a[i][j];
     vector<vector<int>> dp(n,vector<int>(n,-1  ));
     cout<<gg(a,dp,0,0);



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
