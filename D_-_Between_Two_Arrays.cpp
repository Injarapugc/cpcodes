#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 998244353
using namespace std;
ll ans=0;
const int f=1e5;
ll n;
vi a(f),b(f);
vector<vector<ll>> gg;
ll dp[10000][10000];
int g(ll i,vi &ai,ll pr)
{
    if(i==n)
    {
        
        return 1;
    }
    if(dp[i][pr]!=-1) return dp[i][pr];
    ll sum=0;
    for(int j=min(a[i],b[i]);j<=max(a[i],b[i]);j++)
    {
       
        if(j>=pr)
        sum=sum+g(i+1,ai,j);
    }
    return dp[i][pr]=sum;
}
void solve()
{
    cin>>n;
    
    

    fi(i,n+1,1)cin>>a[i];
    fi(i,n+1,1)cin>>b[i];
    ll m=b[n];
    ll sum[n+1][m+1];
    memset(dp,0,sizeof(dp));
    memset(sum,0,sizeof(sum));
    dp[0][0]=0;
    fi(i,m+1,0)sum[0][i]=1;
    fi(i,n+1,1)
    {
        fi(j,m+1,1)
        {
            if(j>=a[i]&&j<=b[i])
            {
                dp[i][j]=(dp[i][j]+sum[i-1][j])%mod;
            }
            sum[i][j]=((j>0?sum[i][j-1]:0)+dp[i][j]);
            sum[i][j]%=mod;
        }
    }
    cout<<sum[n][m]<<endl;
    

}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
