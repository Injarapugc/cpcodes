#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
#define mod 1000000007

int main()
{
    ll n,l;
    cin>>n>>l;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;
    vector<ll> dp(l+1,0);
    dp[0]=1;
    
    for(ll i=1;i<=l;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i-a[j]>=0)
            {
                dp[i]=(dp[i]+dp[i-a[j]])%mod;
            }
        }
    }
    cout<<dp[4];
}
