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
    ll t;cin>>t;
    while(t--)
    {
        ll n,cows;cin>>n>>cows;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        ll l=0,r=1e9+1;
        auto pred=[&](int m)
        {
            ll count=1;
            ll prev=a[0];
            for(ll i=1;i<n;i++)
            {
                if(a[i]-prev>=m)
                {
                    prev=a[i];
                    count++;
                }
            }
            return count>=cows;
        };
        while(r-l>1)
        {
            ll m=(l+r)>>1;
            pred(m)?(l=m):(r=m);
        }
        cout<<l<<endl;


    }
    return 0;
}