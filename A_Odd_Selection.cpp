#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;


void solve()
{
    ll n,x;
    cin>>n>>x;
    ll ans=0,ans1=0;
    fi(i,n,0)
    {
        ll g;
        cin>>g;
        if(g&1)ans++;
        else ans1++;
    }
    if(ans==0)
    {
        cout<<"No\n";
        return;
    }
    for(int i=1;i<=min(x,ans);i+=2)
    {
        if(x-i<=ans1)
        {
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
    }
  
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}
