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
    vi a(n);
    fi(i,n,0)cin>>a[i];
    ll xi=2;
    while(true)
    {
         set<ll> ans;
       
        for(auto x:a)
        {
            ans.insert(x%xi);
        }
        if(ans.size()==2)
        {
            cout<<xi<<endl;
            return;
        }
        xi*=2;
        ans.clear();


    }
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