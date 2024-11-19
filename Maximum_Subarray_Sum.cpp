#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n;
    cin>>n ;
    vi a(n);
    for(auto &x:a)cin>>x;
    ll l=0;
    ll m=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        l+=a[i];
        if(l>m)
        m=l;
        if(l<0) l=0;
    }
    cout<<m<<endl;

    
}
int main()
{
 
    solve();
  }