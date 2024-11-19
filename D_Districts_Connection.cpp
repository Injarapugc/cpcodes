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
    ll n;cin>>n;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    vector<ii> b;
    int id=-1;
    fi(i,n,1)
    {
        if(a[0]!=a[i])
        {
            id=i;
            b.push_back({1,i+1});
        }
    }
    if(id==-1)
    {
        cout<<"NO\n";
        return;
    }
    fi(i,n,1)
    {
        if(a[0]==a[i])
        {
            b.push_back({id+1,i+1});
        }
    }
    cout<<"YES\n";
    for(auto x:b)
    {
        cout<<x.first<<" "<<x.second<<"\n";
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
