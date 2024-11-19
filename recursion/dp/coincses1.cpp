#include<bits/stdc++.h>
using namespace std;
int sum=0;
#define mod 1000000007
int rec(int s,vector<int> &a,int t,vector<int>&dp)
{
    if(s>=t)
    {
        if(s==t)return 1;
        else return 0;
    }
    if(dp[s]!=-1) return dp[s];
    int ans=0;
    for(int i=0;i<a.size();i++)
    {
        ans=(ans+rec(s+a[i],a,t,dp))%mod;
    }
    return dp[s]=ans;
}
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    vector<int> dp(t+1,-1);
    cout<<rec(0,a,t,dp);  
}