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
    cin>>n;
    vi a(n);
    for(auto &x:a)cin>>x;
    ll s=accumulate(a.begin(),a.end(),0);
    cout<<s-*min_element(a.begin(),a.end())<<endl;
  

    
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