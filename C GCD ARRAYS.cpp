#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve()
{
    ll n;cin>>n;
    vi a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vi p(n+1),s(n+1);
    p[0]=a[0];
    s[n+1]=0;
    for(ll i=1;i<=n;i++)
    p[i]=__gcd(p[i-1],a[i]);
    for(ll i=n;i>0;i--)
    s[i]=__gcd(a[i],s[i+1]);
    ll m=0;
    for(ll i=1;i<=n;i++)
    {
        m=max(m,__gcd(p[i-1],s[i+1]));
    }
    cout<<m;
}

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      solve();

}
