#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vi a(n);
    ll s=0;
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++)
    {
        s+=abs(a[i]-a[n/2]);
    }
    cout<<s<<endl;
}
int main()
{

    solve();
  }
