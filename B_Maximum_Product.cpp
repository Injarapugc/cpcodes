#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vi a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end());
    ll val=-1e18;
    ll x=1;
    for(ll i=0;i<5;i++)
    {
        ll a1=(n-1+i)%n;
        ll a2=(n-2+i)%n;
        ll a3=(n-3+i)%n;
        ll a4=(n-4+i)%n;
        ll a5=(n-5+i)%n;
        x=a[a1]*a[a2]*a[a3]*a[a4]*a[a5];
        val=max(x,val);
    }
    cout<<val<<endl;

    
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