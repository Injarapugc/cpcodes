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
    if(n>m)cout<<n-m<<endl;
    else
    {
        int f=m/n;
        f+=m%n==0?0:1;
        f*=n;
        cout<<min(f-m,m%n)<<endl;
    }
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
