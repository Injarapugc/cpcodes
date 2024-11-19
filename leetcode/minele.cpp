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
    ll n;cin>>n;
    vi a;
    for(ll i=0;i<n;i++)cin>>a[i];
    auto pred=[&](int i)
    {
        return(a[i]>a[i+1]);
    };
    int l=0,r=n;
    while(r-l>1)
    {
        int m=(l+r)/2;
        pred(m)?(l=m):(r=m);
    }
    cout<<a[l]<<endl;

    return 0;
}