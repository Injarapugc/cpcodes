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
    ll n,k;cin>>n>>k;
    vi a(n);
    for(auto &x:a)cin>>x;
    int dp[k+1];
    for(int i=1;i<=k;i++)dp[i]=1e5;
    dp[0]=0;
    for(int i=1;i<=k;i++)
    {#include<bits/stdc++.h>
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
        for(int j=0;j<n;j++)
        {
            if(i-a[j]>=0)
            {
                dp[i]=min(dp[i],dp[i-a[j]]+1);

            }
        }
    }
    cout<<dp[k];
  


    
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