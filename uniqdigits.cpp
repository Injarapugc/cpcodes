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

long long c(int n,int k,int a[],int dp[])
{
    if(k<1) return 1;
    if(dp[n]!=-1)return dp[n];
    ll ans=0;
    fi(i,11,0)
    {
        if(!a[i]&&(i!=0||k!=n))
        {
            a[i]=1;
            ans+=c(n,k-1,a,dp);
            a[i]=0;
        }

    }
    return dp[n]=ans;

}

void solve()
{
    ll n;
    cin>>n;
    int a[10]{0};
    ll ans=0;
    int dp[10]{-1};   
     fi(i,n+1,0)ans+=c(i,i,a,dp);
    cout<<ans;
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
