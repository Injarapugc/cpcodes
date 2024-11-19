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
ll gg(ll x,ll y)
{
  return 1LL*(x*y)/__gcd(x,y);

}
void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll g1=n/x;
    ll g2=n/y;
    ll f=0;
    ll g3=gg(x,y);
    g3=(n)/g3;
    g2-=g3;
    g1-=g3;
  ll s2=(g2*(g2+1))/2;
  ll s1=(n*(n+1))/2;
  f=n-g1;
  s1-=(f*(f+1))/2;
  cout<<s1-s2<<endl;

    

    
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