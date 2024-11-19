#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+1;

int main()
{
    ll n1;cin>>n1;
    ll k;cin>>k;
    ll c=1;
    ll a[k];
    ll ans=0;
    ll ca=1;
    for(ll i=1;i<=k;i++)
    {
        ll k1;cin>>k1;
        ans+=n1/k1;
        ca*=k1;
    }
    c=n1/ca;
   
    cout<<ans-c<<endl;
    
    
    return 0;
}