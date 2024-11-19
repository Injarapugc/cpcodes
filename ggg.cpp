#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int n;
int s;
int riz(int i,int j,vector<int> &a,vector<int> &dp)
{
    if(i==n) return 0;
    if(j>=s) return j==s;
    if(dp[j]!=-1) return dp[j];
    int ans=0;
    for(int k=0;k<n;k++)
    {
                ans=(ans%mod+riz(k,j+a[k],a,dp)%mod)%mod;
    }
    return dp[j]=ans;
}
int main()
{
    cin>>n;
    cin>>s;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    vector<int> dp(s+1,0);
    dp[0]=1;
    for(int i=1;i<=s;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-a[j]>=0) dp[i]=(dp[i]+(dp[i-a[j]]))%mod;
        }

    }
    cout<<dp[s];
    
    
    
}