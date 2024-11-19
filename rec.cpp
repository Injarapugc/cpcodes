#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007  
ll riz(ll a,ll b)
{
    if(b==0) return 1;
    ll x=riz(a,b/2);
    if(b&1)
    {
        return (a*(b*b)%mod)%mod;
    }
    else return (b*b)%mod;
}
int main()
{
    cout<<riz(5,200);
}