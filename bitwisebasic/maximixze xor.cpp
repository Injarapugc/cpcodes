#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll m,n;cin>>m>>n;
      ll ans=0;
      ll maxi=0;
      for(ll i=m;i<=n;i++)
      {
        for(ll j=i;j<n;j++)
        {
             ans=(i^m);
           maxi=max(ans,maxi);
        }
       
      }
      cout<<maxi;

}
