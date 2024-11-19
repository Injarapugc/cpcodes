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
    if(n==1)
    {
        cout<<"YES\n";
        return;
    }
    int d=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            d=i;
            break;
        }
    }
    if(d==0)d=n;
    if(d>m)cout<<"YES\n";
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