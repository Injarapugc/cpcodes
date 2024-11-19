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
    ll a,b,n,m;
    cin>>a>>b>>n>>m;
    ll a1=a*n;
    ll a2=0;
    a2+=(a/b)*m;
    a2+=a%b==0?0:m;
    ll a3=0;
    ll k=b;
    a3+=(a/b)*m;
    a3+=(a%b)*n;
  
    cout<<min(a1,min(a2,a3));


}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}