#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve()
{
    ll n,m;cin>>n>>m;
    vi a(n);
    ll s=0;
    for(auto &x:a)cin>>x;
    ll t=0;
    for(int i=0;i<m;i++)
    {
        ll x;cin>>x;
        while(s+a[i]<x)s+=a[t++];
        cout<<t<<" "<<x-s;
    }
   

}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      solve();

}
