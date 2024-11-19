#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve(vi a,vi b,ll n, ll m)
{
    ll i=0,j=0,ans=0;
    while(i<n)
    {
        if(a[i]==b[j])
        {
            ans++;
            j++;
        }
        else 
        {
            i++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n,m;cin>>n>>m;
      vi a(n),b(m);
      solve(a,b,n,m);

}
