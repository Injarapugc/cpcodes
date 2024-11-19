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
    ll n,c,d;
    cin>>n>>c>>d;
    vi a;
    set<ll> s;
    ll ans=INT_MAX;
    fi(i,n,0)
    {
        int x;
        cin>>x;
        a.push_back(x);
        s.insert(x);

    }
    vi b;
    for(auto x:s)b.push_back(x);
    fi(i,n,0)
    {
        auto it=lower_bound(b.begin(),b.end(),a[i]);
        int temp=it-b.begin()+1;
        ll tem2=1LL*(n-temp)*c+1LL*(a[i]-temp)*d;
        ans=min(ans,tem2);
    }
     ans=min(ans,1LL*n*c + 1LL*d);
   
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