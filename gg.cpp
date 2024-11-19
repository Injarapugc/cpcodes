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
    vi a{1,2};
    int f=lower_bound(a.begin(),a.end(),2)-a.begin();
    cout<<f;
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