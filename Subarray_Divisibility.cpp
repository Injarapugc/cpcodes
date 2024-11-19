#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define read(arr,n) ll arr[n]; for(ll i=0;i<n;i++)cin>>arr[i];
void solve()
{
    ll n;
    cin>>n;
    vi a(n);
    for(auto &x:a)cin>>x;
    map<ll,int> ans;
    ans[0]++;
    ll s=0;
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        s+=a[i]%n;
        s=(s+n)%n;
        c+=ans[abs(s)%n];
        ans[s%n]++;
    }
    cout<<c<<endl;


}
int main()
{
    solve();
}