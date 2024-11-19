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
    ll a[n][n];
    ll dp[n+1][n+1];
    fi(i,n,0)fi(j,n,0)cin>>a[i][j];
    memset(dp,-1,sizeof(dp));
    fi(i,n,0)dp[i][0]=0;
    fi(j,n,0)dp[0][j]=0;
    fi(i,n+1,1)
    {
        fi(j,n+1,1)
        {
            dp[i][j]=a[i-1][j-1]+max(dp[i-1][j],dp[i][j-1]);

        }
    }
    fi(i,n+1,0)
    {
        fi(j,n+1,0)cout<<dp[i][j]<<" ";
        cout<<endl;

    }
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
