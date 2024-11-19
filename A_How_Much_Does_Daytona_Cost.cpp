#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    int n;
    int k;
    cin>>n>>k;
    vi a(n);
    for(auto &x:a)cin>>x;
    if(count(a.begin(),a.end(),k)>0)cout<<"yes\n";
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