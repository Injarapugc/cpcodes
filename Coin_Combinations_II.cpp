#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
const int mod=1e9+7;
int main()
{
  ll n,k;
  cin>>n>>k;
  vector<ll> ans(n);
  for(auto &x:ans)cin>>x;
  vector<ll> a(k+1,0);
  a[0]=1;
  for(ll i=0;i<n;i++)
  {
    for(ll j=1;j<=k;j++)
    {
        if(j-ans[i]>=0)
        {
            a[j]=(a[j]+a[j-ans[i]])%mod;
        }
    }
  }
      cout<<a[k]<<endl;
}