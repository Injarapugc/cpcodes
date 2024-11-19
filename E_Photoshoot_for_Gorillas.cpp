#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (ll i = 0; i < int(n); i++)
#define fi(i,n,x)  for (ll i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;


void solve()
{
    ll n,m,k,w;
    cin>>n>>m>>k;
    cin>>w;
    vi a(w);
    fi(i,w,0)cin>>a[i];
    sort(a.rbegin(),a.rend());
    vector<int> ans;
    fi(i,n,0)
    {
        fi(j,m,0)
        {
            ll x,y;
            x=min(i+k-1,n-1)-max(i,k-1)+1;
           y=min(j+k-1,m-1)-max(j,k-1)+1;
           ans.push_back(x*y);

        }
    }
    ll ff=0;
    sort(ans.rbegin(),ans.rend());
    ans.resize(n*m); 
    fi(i,w,0)
    {
        ff+=ans[i]*a[i];
    }
    cout<<ff<<endl;

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
