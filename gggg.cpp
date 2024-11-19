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
void g()
{
    int n,k;
    cin>>n>>k;
    
}

void solve()
{
    ll n;
    cin>>n;
    int c=0;
    int ans=0;
    while(n>0)
    {
        ans+=n&1;
        n=n>>1;
    }
    cout<<ans;
}
  
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    g();
  }
}
