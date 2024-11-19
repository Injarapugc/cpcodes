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
    string s;
    cin>>s;
    ll n=s.length();
    vi p(n+1,0);
    fi(i,n+1,1)
    {
        ll c=s[i-1]=='1'?1:-1;
        p[i]+=p[i-1]+c;
    }
   
    map<ll,ll> a;
    ll ans=0;
    fi(i,n+1,0)
    {
        ll f=p[i];
        ll sum=a[f];
        ll r=n-i+1;
        ans+=r*sum;
        a[f]+=i+1;
    }
    ans%=mod;
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
