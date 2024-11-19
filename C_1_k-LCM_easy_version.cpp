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
    ll n,k;
    cin>>n>>k;
    if(n&1)cout<<n/2<<" "<<n/2<<" "<<1<<endl;
    else
    {
        if((n/2)&1)cout<<n/2-1<<" "<<n/2-1<<" "<<2<<endl;
        else cout<<n/2<<" "<<(n/2)/2<<" "<<(n/2)/2<<endl;
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
