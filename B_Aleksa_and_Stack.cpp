#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    int n;cin>>n;
    ll x=2,y=3;
    ll z;
    int i=2;
    cout<<x<<" "<<y<<" ";
    while (i<n)
    {
        z=y+1;
        while ((3*z)%(x+y)==0) z++;
        x=y;
        y=z;
        cout<<z<<" ";
        i++;
    }
    cout<<endl;
    
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