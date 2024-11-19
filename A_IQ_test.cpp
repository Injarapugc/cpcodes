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
    ll e,o;
    ll x1,x2;
    e=o=0;
    int n;cin>>n;
    vi a(n);
    for(auto&x:a)cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]&1)
        {
            o++;
            x1=i;
        }
        else 
        {
            e++;
            x2=i;
        }
    }
    if(o==1)cout<<x1+1<<endl;
    else cout<<x2+1<<endl;
}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}