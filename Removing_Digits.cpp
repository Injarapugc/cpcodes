#include<bits/stdc++.h>
using namespace std;
#define m 1e9
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll> a(n+1,m);
    a[0]=0;
    for(ll i=1;i<=n;i++)
    {
        ll t=i;
        while (t>0)
        {
            a[i]=min(a[i],a[i-t%10]+1);
            t/=10;
        }
    }
    cout<<a[n]<<endl;

}

