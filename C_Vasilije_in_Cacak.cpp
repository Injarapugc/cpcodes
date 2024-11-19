#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
ll sum(ll n)
{
    return (n*(n+1))/2;
}
void solve()
{
    ll n,k, s;
    cin>>n>>k>>s;
    ll s1=sum(k);
    ll s2=sum(n)-sum(n-k);
    if(s>=s1&&s<=s2)cout<<"yes\n";
    else cout<<"no\n";




    
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