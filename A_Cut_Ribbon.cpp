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
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll ans=0;
    for(int i=0;i<=4000;i++)
    {
        for(int j=0;j<=4000;j++)
        {
            ll e=n-a*i-b*j;
            if(e>=0&&e%c==0)ans=max(ans,i+j+e/c);
        }
    }
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