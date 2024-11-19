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
    ll n,m;
    cin>>n>>m;
    vi a(n);
    ll ans=0;
    fi(i,n,0)
    {
       cin>>a[i];
    }
    sort(a.begin(),a.end());
    vi pre(n);
    fi(i,n,0)
    {
        ans+=a[i];
        pre[i]=ans;
    }
    fi(i,n,0)
    {
        ll x=m-pre[i];
        if(x>=0&&x/(i+1)>0)
        {
            ans+=(x/(i+1))+1;
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
