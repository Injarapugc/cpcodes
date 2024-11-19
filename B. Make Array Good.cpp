#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve()
{
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        ll d=1;
        while(d<a[i])
        {
            d*=2;
        }
        cout<<i+1<<" "<<d-a[i]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      ll tc;cin>>tc;
      while(tc--)solve();
}
