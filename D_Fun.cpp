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
    ll n,x;
    cin>>n>>x;
    ll ans=0;
    ll f=x;
    for(ll i=1;i<=x&&i<=n;i++)
    {
        for(ll j=1;j+i<=x&&j*i<=n;j++)
        {
            ll c1=max(0LL,x-i-j),c2=max(0LL,n-i*j)/(i+j);
            ans+=min(c1,c2);

        }
    }
    cout<<ans<<endl;

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
