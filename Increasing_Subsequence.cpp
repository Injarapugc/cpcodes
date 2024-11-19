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
vector<vector<ll>> dp;

void solve()
{
    ll n;
    cin>>n;
    vi g;
    fi(i,n,0)
    {
        ll x;
        cin>>x;
        auto it=lower_bound(g.begin(),g.end(),x)-g.begin();
        if(it==g.size())
        {
            cout<<x<<endl;
            g.push_back(x);
        }
        else g[it]=x;
    }
    for(auto x:g)cout<<x<<" ";




}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
