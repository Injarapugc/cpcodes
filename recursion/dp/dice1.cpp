#include<bits/stdc++.h>
using namespace std;
#define m 1000000007;
int riz(int n,vector<int>&dp,int t)
{
    if(n<0) return 0;
    if(n>=t)
    {
        if(n==t) return 1;
        else return 0;
    }
    if(dp[n]!=-1) return dp[n];
    return dp[n]=(riz(n+1,dp,t)+riz(n+2,dp,t)+riz(n+3,dp,t)+riz(n+4,dp,t)+riz(n+5,dp,t)+riz(n+6,dp,t))%m;
}
int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<riz(0,dp,n);
}
