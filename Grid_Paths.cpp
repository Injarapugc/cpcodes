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


void solve()
{
    ll n;
    cin>>n;
    vector<string> a(n);
    fi(i,n,0)cin>>a[i];
    ll dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=a[0][0]=='.'?1:0;
    fi(i,n,0)
    {
        fi(j,n,0)
        {
            if(a[i][j]=='.')
            {
                 if(i-1>=0&&a[i-1][j]=='.') dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
                 if(j-1>=0&&a[i][j-1]=='.')dp[i][j]=(dp[i][j]+dp[i][j-1])%mod;
            }
        }
    }
    cout<<dp[n-1][n-1];
}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
