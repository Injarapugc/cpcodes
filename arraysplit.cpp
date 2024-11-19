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
    ll k;cin>>k;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    ll l=*min_element(a.begin(),a.end());
    ll r=accumulate(a.begin(),a.end(),0);
    auto it=[&](int i)
    {
        int j=0;
        int s=0;
        for(auto x:a)
        {
            if(x+s<=i)
            {
                j++;
                s+=x;
            }
            else
            {
                s=x;
            }
        }
        return j<=k;

    };
    l--;
    r++;
    while (r-l>1)
    {
        int m=(l+r)/2;
        if(it(m)) r=m;
        else l=m;
        /* code */
    }
    cout<<r<<endl;
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