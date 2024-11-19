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
        int l=0,r=1e9+1;
        auto pred=[&](int i)
        {
            int count=0;
            int prev=INT_MIN;
            for(int i=0;i<n;i++)
            {
                if(a[i]-prev>=i)
                prev=a[i];
                count++;
            }
            return count>=cows;
        };
        while(r-l>1)
        {
            int m=(l+r)/2;
            pred(m)?(l=m):(r=m);
        }

    }
    return 0;
}