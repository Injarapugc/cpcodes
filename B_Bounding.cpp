#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    
}
int main()
{
    ll n,k;
    cin>>n>>k;
    vi a(n);
    for( auto &x:a)cin>>x;
    vi b(n+1);
    b[0]=0;
    for(ll i=1;i<=n;i++)
    {
        b[i]=b[i-1]+a[i-1];
    }
    int ans=upper_bound(b.begin(),b.end(),k)-b.begin();
    cout<<ans;

}