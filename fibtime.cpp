#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll s1=0;
ll s2=0;
ll dp[100000];
ll sol(ll i)
{
    s2++;
    if(i<=0) return 0;
    if(i==1||i==2) return 1;
    if(dp[i]!=-1) return dp[i];
    return dp[i]=sol(i-1)+sol(i-2);
}
int main()
{
    ll m;
    cin>>m;
    memset(dp,-1,sizeof(dp));
    cout<<sol(m)<<" "<<s2<<endl;
}