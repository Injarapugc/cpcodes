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
int a[100005],dp[100005];
int n,k;
int ss(int i)
{
    if(i==n) return 0;
    if(dp[i]!=-1) return dp[i];
    int ans=1e9;
    for(int j=i+1;j<=min(n,i+k);j++)
    {
        ans=min(ans,abs(a[i]-a[j])+ss(j));
    }
    return dp[i]=ans;
}


void solve()
{
    cin>>n>>k;
    fi(i,n+1,1)cin>>a[i];
    fi(i,n+1,1)dp[i]=1e9;
    dp[1]=0;

    fi(i,n+1,1)
    {
        for(int j=i+1;j<=min(n,i+k);j++)
        {
            dp[j]=min(dp[j],dp[i]+abs(a[j]-a[i]));
        }
    }
    fi(i,n+1,1)cout<<dp[i]<<" ";
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
