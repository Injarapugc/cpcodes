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
    ll l,r,x;cin>>l>>r>>x;
    ll a,b;cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    if(abs(a-b)>=x)
    {
        cout<<1<<endl;
        return;
    }
    if(r-max(a,b)>=x||min(a,b)-l>=x)
    {
        cout<<2<<endl;
        return;
    }
    if(((r-b>=x)&&(a-l)>=x)||((r-a)>=x&&(b-l)>=x))
    {
        cout<<3<<endl;
        return;
    }
    cout<<-1<<endl;
    return;
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
