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
    set<char> f{'c','o','d','e','f','o','r','c','e','s'};
    char g;
    cin>>g;
    if(find(f.begin(),f.end(),g)==f.end())
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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
