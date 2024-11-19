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
    sort(a.begin(),a.end());
    ll res=0;
    for(ll i=n-1;i>0;i--)
    {
        if(a[i]<=2*a[0])
        {
            cout<<res;
        }
        else  res++;
        
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      solve();

}
