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
int dp[20001];

void solve()
{
    ll n,h,l,r;
    cin>>n>>h>>l>>r;
    vi a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];

    int m=1e9;
    vector<vector<int>> d(n+1,vector<int>(h,-m));
    d[0][0]=0;
    for(int i=1;i<=n;i++)
    {
      for(int j=0;j<h;j++)
      {
        d[i][j]=max(d[i-1][(j-a[i]+1+h)%h],d[i-1][(j-a[i]+h)%h]);
        if(j>=l&&j<=r&&d[i][j]!=-m) d[i][j]++;
      }
    }
    int ans=0;
    for(int j=l;j<=r;j++)ans=max(ans,d[n][j]);
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