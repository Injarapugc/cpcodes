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
    cin >> n;
    vi a(n);
    fi(i, n, 0) cin >> a[i];
    int ans=INT_MAX;
    ll f = 32768;
    fi(i,n,0)
    {
         ll k=a[i];
         ans=INT_MAX;
         fi(add,16,0)
         {
            fi(mul,16,0)
            {
               if((k+add)*(1<<mul)%f==0)ans=min(ans,add+(mul));
            }
         }
         cout<<ans<<" ";

    }

}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
