#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
         map<ll,ll> a;
        ll ans=0;

        for(ll i=0;i<n;i++)
        {
            ll x;cin>>x;
            ll r=x-i;
            ans+=a[r];
            a[r]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}