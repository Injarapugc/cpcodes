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
    ll m;cin>>m;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    vector<vector<int>> dp(n,vector<int>(m+1,0));
    if(a[0]!=0) 
    {
        dp[0][a[0]]=1;
    }
    else 
    {
        fi(i,m+1,1)dp[0][i]=1;
    }
    ll ans=0;
    fi(i,n,1)
    {
        if(a[i]==0)
        {
            fi(j,m+1,1)
            {
                if(j-1>=1)
                {
                  
                    dp[i][j]=(dp[i][j]+dp[i-1][j-1])%mod;

                }
                  dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
                if(j+1<=m)
                {
                    dp[i][j]=(dp[i-1][j+1]+dp[i][j])%mod;

                }
 
            }
            
        }
        else{
               if(a[i]-1>=1)
               {
                 
                  dp[i][a[i]]=(dp[i-1][a[i]-1]+dp[i][a[i]])%mod;
               }
                   dp[i][a[i]]=(dp[i-1][a[i]]+dp[i][a[i]])%mod;
               if(a[i]+1<=m)
               {
                    dp[i][a[i]]=(dp[i][a[i]]+dp[i-1][a[i]+1])%mod;
               }



        }
    }
    fi(i,m+1,1)ans=(ans+dp[n-1][i])%mod;
    cout<<ans;

}
  
int main()
{
  ll t;
  t=1;
  while(t--)
  {
    solve();
  }
}
