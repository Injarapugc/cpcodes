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
    int ans=0;
    while(n)
    {
        if(n&1)ans=ans+1;
        n=n>>1;
    }
    cout<<ans<<endl;
  


    
}
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}