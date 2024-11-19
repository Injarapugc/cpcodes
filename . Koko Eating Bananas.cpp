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
    vector<ll> a;
    ll target;cin>>target;
    ll n;cin>>n;
    while(n--)
    {
        ll b;cin>>b;
        a.push_back(b);
    }
    ll l=0,r=1e9;
    auto pred=[&](int j)
    {
        ll s=0;
        for(ll i=0;i<a.size();i++)
        {
            ll b=a[i]/j;
            s+=b;
            if(a[i]%j!=0)s+=1;
        }
        return(s>=target);

    };
    while(r>l+1)
    {
        ll m=(l+r)/2;
        pred(m)?(r=m):(l=m);
    }
    cout<<r<<endl;


    return 0;
}