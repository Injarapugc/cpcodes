#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll arr[n],temp[n];
        ll prev=INT_MIN;
        bool ascending=true;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<prev)
                ascending=false;
            prev=arr[i];
            temp[i]=arr[i];
        }
        sort(temp,temp+n);
        if(ascending)
        {
            cout<<"YES"<<endl;
            continue;
        }
        bool halwa=true;
        for(ll i=0;i<n;i++)
        {
            if((i+1+x)>n && (i+1-x)<=0)
            {
                if(arr[i]!=temp[i]){
                    halwa=false;
                    break;
                }
            }
        }
        if(halwa)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
    return 0;
}