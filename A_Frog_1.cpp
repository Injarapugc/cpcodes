#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(int n,vector<int> &a,vector<int> &dp)
{
    if(n==0)
    {
        return 0;
    }
    if(dp[n]!=-1) return dp[n];
    int l=abs(a[n]-a[n-1])+solve(n-1,a,dp);
    int r=INT_MAX;
    if(n-2>=0)
    {
        r=abs(a[n]-a[n-2])+solve(n-2,a,dp);

    }
    return dp[n]=min(l,r);
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> dp(n+1,-1);
    for(auto &x:a)cin>>x;
    cout<<solve(n-1,a,dp);
}