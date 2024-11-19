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
    ll x=0,gg=0;
    fi(i,n,0)
    {
        ll g;
        cin>>g;
        if(g==n)x++;
        else gg++;
    }
    if(x==n)cout<<-1<<endl;
    else
    {
        if(x==0)
        {
            cout<<0<<endl;
            return;
        }
        cout<<n-x<<endl;
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
