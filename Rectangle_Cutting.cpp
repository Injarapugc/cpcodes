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
ll dp[501][501];
ll a,b;
int solve(int x, int y) {
    if (x == y) return 0;
    if (dp[x][y] != -1) return dp[x][y];
    if (dp[y][x] != -1) return dp[y][x];
    
    int ans = INT_MAX;

    for (int i = 1; i < x; i++) {
        ans = min(ans, solve(i, y) + solve(x - i, y) + 1);
    }

    for (int i = 1; i < y; i++) {
        ans = min(ans, solve(x, i) + solve(x, y - i) + 1);
    }

    return dp[x][y] = ans;
}


ll gg(ll i,ll j)
{
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(dp[j][i]!=-1) return dp[j][i];
   ll ans=1e9;
   fi(k,i,1)
   {
       ans=min(ans,gg(k,j)+gg(i-k,j)+1);
   }
    fi(k,j,1)
   {
       ans=min(ans,gg(i,k)+gg(i,j-k)+1);
   }

    return dp[i][j]=ans;
}
void solve()
{
    cin>>a>>b;
    ll f=501;
    vector<vector<ll>> dp(f,vector<ll>(f,1e9));
  
    fi(i,500,1)
    {
        fi(j,500,1)
        {
            if(dp[j][i]!=1e9) continue;
            if(i==j)
            {
                dp[i][j]=0;
                continue;
            }
            fi(k,i,1)
            {
                dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
                 dp[j][i]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
            }
             fi(k,j,1)
            {
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
                  dp[j][i]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
            }

        }
    }
    cout<<dp[a][b]<<endl;
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
