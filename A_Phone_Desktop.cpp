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
    ll x,y;
    cin>>x>>y;
    ll ans=0;
    if(x<=15)
    {
        ans+=1;
        
    }
    else{
         if(x%15==0) ans+=x/15;
         else
         {
            ans+=1;
            ans+=x/15;
         }
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
