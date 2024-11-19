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
    map<ll,ll> a;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a[x]++;
    }
    ll s=0;
    for(auto x:a)
    {
        ll j=x.second;
        s=s+(j*(j-1))/2;
    }
    cout<<s<<endl;
  


    
}
int main()
{
 
    solve();
  }
