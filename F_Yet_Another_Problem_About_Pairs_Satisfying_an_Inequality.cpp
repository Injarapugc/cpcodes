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
    vi a(n);
    for(auto &x:a)cin>>x;
    vi b;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>=i+1)continue;
        b.push_back(i+1);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<i+1)
        ans+=lower_bound(b.begin(),b.end(),a[i])-b.begin();
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