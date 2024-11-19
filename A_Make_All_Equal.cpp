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
    map<ll,ll> a;
    fi(i,n,0)
    {
        ll x;
        cin>>x;
        a[x]++;
    }
    ll ans=-1e9;
    for(auto x:a)
    {
        ans=max(ans,x.second);
    }
    cout<<n-ans<<endl;
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
