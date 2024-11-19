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
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    ll flag=0;
    for(ll i=1;i<n;i++)
    {
        if(a[i]==-1&&a[i-1]==-1)
        {
            flag=1;
            break;
        }
    }
    if(flag)cout<<s+4<<endl;
    else
    {
        if(s==n)cout<<s-4<<endl;
        else cout<<s<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll t;cin>>t;
      while(t--)
      {
        solve();
      }

}
