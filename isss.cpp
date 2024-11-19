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
vi r{1,0},c{0,-1};

int riz(vector<vector<int>>&a,vector<vector<int>>& dp,int m,int n)
    {
        if(m==0&&n==0)
        {
            return 1;
        }
        if(m<0||n<0||m>=a.size()||n>=a.size()||a[m][n]==0) return 0;
        int s=0;
        s=s+riz(a,dp,m-1,n)+riz(a,dp,m,n-1)+riz(a,dp,m+1,n)+riz(a,dp,m,n+1);
        return s;
    }
void solve()
{
    ll n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    vector<vector<int>> dp(1000,vector<int>(1000,-1));
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
    cout<<riz(a,dp,n-1,n-1);
  


    
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