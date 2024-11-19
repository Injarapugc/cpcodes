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
    fi(i,n,0)cin>>a[i];
    vi p(n,0);
    p[0]=a[0];
    fi(i,n,1)p[i]+=p[i-1]+a[i];
    string s;
    cin>>s;
    set<ii> aa;
    int i=0,j=n-1;
   while(i<j)
   {
        if(s[i]=='L'&&s[j]=='R')
        {
            aa.insert({i,j});
            i++,j--;
        }
        else if(s[i]=='R')i++;
        else if(s[j]=='L')j--;
   }
    ll ans=0;
    for(auto x:aa)
    {
        ll f1=x.first,f2=x.second;
        if(f1==0)ans+=p[f2];
        else ans+=p[f2]-p[f1-1];
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
