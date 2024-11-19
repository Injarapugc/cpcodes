#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vi a(n);
    for(auto &x:a)cin>>x;
    vi p(n),s(n);
    p[0]=a[0];
    s[n-1]=a[n-1];
    for(ll i=1;i<n;i++)
    {
        p[i]=p[i-1]+a[i];
    }
    for(ll i=n-2;i>=0;i--)
    {
        s[i]=s[i+1]+a[i];
    }
    ll ans=INT_MAX;
    for(ll i=0;i<n-1;i++)
    {
        ans=min(ans,abs(p[i]-s[i+1]));
    }
    cout<<ans;
}