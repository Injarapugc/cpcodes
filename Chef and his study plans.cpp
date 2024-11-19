#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve()
{
  ll n,q;cin>>n>>q;
  vii a(n);
  vii b(q);
  for(ll i=0;i<n;i++)
  {
    cin>>a[i].first;
    cin>>a[i].second;
  }
  for(ll i=0;i<q;i++)
  {
    cin>>b[i].first;
    cin>>b[i].second;
  }
  
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      solve();
      

}
