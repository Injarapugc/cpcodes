#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
int linear(int a[],ll n,ll key)
{
    ll ans=-1;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            ans=i+1;
            
        }
        return ans;
    }
}


int main()
{
    ll n;cin>>n;
    int a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll key;
    cin>>key;
    int answer=linear(a,n,key);
    if(answer==-1)cout<<"NOT FOUND\n";
    else cout<<answer<<endl;


}
