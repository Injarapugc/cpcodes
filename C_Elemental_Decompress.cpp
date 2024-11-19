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
    vi r;
    ll g=0;
    vi a(n+1),b(n+1),p(n+1),q(n+1);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]>n)
      {
        g=1;
      }
      else
      b[a[i]]++;
      if(b[a[i]]>2)g=1;
    }
    if(g)
    {
      cout<<"YES\n";
      return;
    }
    for(int i=1;i<=n;i++)
    {
      if(b[i]<=0)
      {
        r.push_back(i);
      }
    }
    for(int i=0;i<n;i++)
    {
      if(b[a[i]]==1)
      {
        p[i]=a[i];
        q[i]=a[i];
      }
    }
    vii gg;
    fi(i,n,0)
    {
      if(b[a[i]]==2)
      {
       
        gg.push_back({a[i],i});
      }
    }
   
    sort(gg.begin(),gg.end());
    if(2*r.size()!=gg.size())
    {
      cout<<"NO\n";
    }
    ll x=gg.size(),y=r.size();
    for(ll i=x-1, k=y-1;i>=0&&k>=0;i-=2,k--)
    {
      p[gg[i].second]=gg[i].first;
      q[gg[i].second]=r[k];
      p[gg[i-1].second]=r[k];
      q[gg[i-1].second]=gg[i].first;
    }
    for(int i=0;i<n;i++)
    {
      if(a[i]!=max(p[i],q[i]))
      {
        cout<<"NO\n";
        return;
      }
    }
    cout<<"YES\n";
    for(int x=0;x<n;x++)cout<<p[x]<<" ";
    cout<<endl;
    for(int x=0;x<n;x++)cout<<q[x]<<" ";
    cout<<endl;
    
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