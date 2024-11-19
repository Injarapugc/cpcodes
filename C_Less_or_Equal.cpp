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
    ll n,k;
    cin>>n>>k;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    sort(a.begin(),a.end());
    auto it=[&](int i)
    {
        ll ans=0;
        fi(j,n,0)
        {
            if(a[j]>i)break;
            else ans++;
        }
        return ans>=k;
    };
    ll l=0;
    ll r=1e9+1;
    while(r-l>1)
    {
        ll m=(l+r)/2;
        if(it(m))r=m;
        else l=m;
    }
    ll fla=1;
    ll ans=0;
    fi(i,n,0)
    {
        if(a[i]<=r)ans++;
        else break;
    }
    if(ans==k)cout<<r;
    else cout<<-1<<endl;


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
