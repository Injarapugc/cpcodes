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
    ll n;
    cin>>n;
    vi a;
    ll l=-1;
    ll ans=0;
    fi(i,n,0)
    {
        ll x;
        cin>>x;
        if(x%2==0)
        {
            a.push_back(x);
        }
        else l=max(l,x);
    }
    if(l==-1||a.empty())
    {
        cout<<0<<endl;
        return;
    }
    ans=a.size();
    sort(a.begin(),a.end());
    for(auto x:a)
    {
        if(l>x)l+=x;
        else
        {
            ans++;
            break;
        }
    }
    cout<<ans<<endl;

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
