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
    ll x1,x2,x3;
    cin>>x1>>x2>>x3;
    ll m=max(x1,max(x2,x3));
    ll mi=min(x1,min(x2,x3));
    ll ans=1e9;
    for(int i=mi;i<=m;i++)
    {
        ll an=abs(x1-i)+abs(x2-i)+abs(x3-i);
        ans=min(an,ans);
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
