#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve()
{
    ll n,k;cin>>n>>k;
    vi a(n),b(n);
    for(auto &x:a)
    cin>>x;
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i])s+=a[i];
    }
    vi ans(n+1);
    ans[0]=0;
    for(ll i=1;i<=n;i++)
    {
        ans[i]=ans[i-1]+a[i-1];
    }
    ll final;
    for(ll i=n;i>=k;i--)
    {
        final=max(final,ans[i]-ans[i-k]);
    }
    cout<<final<<"\n";
    
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      solve();

}
