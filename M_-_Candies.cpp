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
    ll n,k;
    cin>>n>>k;
    vi a(n+1);
    fi(i,n+1,1)cin>>a[i];
    vector<vi> dp(n+1,vi(k+1,0));
    vector<vi> ps(n+1,vi(k+1,0));
    dp[0][0]=1;
    fi(i,k+1,0)ps[0][i]=1;
    fi(i,n+1,1)
    {
        fi(j,k+1,0)
        {
            dp[i][j]=(ps[i-1][j]-ps[i-1][max(0LL,j-a[i])]+dp[i-1][max(0LL,j-a[i])]+mod)%mod;
            dp[i][j]%=mod;
            if(j-1>=0)ps[i][j]=ps[i][j-1];
            ps[i][j]=ps[i][j]+dp[i][j];
            ps[i][j]%=mod;
        }

    }
    fi(i,n+1,1)
    {
        fi(j,k+1,0)
        {
            cout<<ps[i][j]<<" ";
        }
        cout<<endl;
    }
    fi(i,n+1,1)
    {
        fi(j,k+1,0)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }


    
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