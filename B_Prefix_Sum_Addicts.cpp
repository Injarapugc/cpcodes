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
    vi a(m);
    fi(i,m,0)cin>>a[i];
    ll p=a[0];
    ll s1=0;
    if(n==1||m==1)
    {
        cout<<"YES\n";
        return;
    }
    for(int i=1;i<m;i++)
    {
        if(a[i]<a[i-1])
        {
            cout<<"NO\n";
            return;
        }
        s1+=a[i]-a[i-1];
    }
    ll f=a[1]-a[0];
    
    f=((f*(f+1)))/2;
    if(f>=a[0])cout<<"YES\n";
    else cout<<"NO\n";
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