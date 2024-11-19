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
    ll n;
    cin>>n;
    vi a(n);
    for( auto &x:a)cin>>x;
    cout<<a[0]<<" ";
    for(ll i=1;i<n;i++)
    {
        cout<<a[i]-a[i-1]<<" ";
    }

}