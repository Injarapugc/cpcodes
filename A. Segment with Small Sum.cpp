#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve(vi a,ll n,ll s)
{
    ll i=0,j=0;
    ll su=0,res=0;
    for(ll i=0;i<n;i++)
    {
        su+=a[i];
        while(su>s)
        {
            su-=a[j];
            j++;
        }
        
        if(su<s)
            res=max(res,i-j+1);

    }
    cout<<res<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n,s;cin>>n>>s;
      vi a(n);
      for(ll i=0;i<n;i++)cin>>a[i];
      solve(a,n,s);

}
