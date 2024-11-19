#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;cin>>n;
    vector<ll> a;
    ll s=0;
    ll temp=n;
    while(n--)
    {
        ll b;
        cin>>b;
        if(b==4)s+=1;
        else
        {
            a.push_back(b);
        }
    }
    sort(a.begin(),a.end());
    ll i=0;
    ll j=a.size()-1;

    while(i<j)
    {
        if(a[i]+a[j]==4)
        {
            s+=1;
            i++;
            j--;
        }
        else 
        {
            s+=j-i;
            break;
        }
    }
    if(temp%2==0)cout<<s;
    else cout<<s+1;
}