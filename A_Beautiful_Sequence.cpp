#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
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
      ll t;cin>>t;
      while(t--)
      {
        ll n;cin>>n;
        ll i=1;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll j=0;
        ll ans=-1;
        while(n--)
        {
            if(a[j]<=i)
            {
                ans=0;
                break;
            }
            j++;
            i++;
        }
        if(ans==-1)cout<<"NO\n";
        else cout<<"YES\n";

      }
   
      

}
