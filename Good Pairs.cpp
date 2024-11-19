#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        ll n;cin>>n;
        vector<ll> a(n);
        map<ll,ll> v;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            v[a[i]]++;
        }
        ll sum=0;
        for(auto i:v)
        {
            if(i.second>1)sum+=((i.second)*(i.second-1)/2);
        }
        cout<<sum<<endl;
    }
       
}