#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
int riz(int i,vector<int> &dp)
{
    if(i<=0) return i==0;
    if(dp[i]!=-1) return dp[i];
    int ans=0;
    for(int j=1;j<=6;j++)
    {
        ans=ans+riz(i-j,dp)%m;
    }
    return dp[i]=ans;
}
int main()
{
   int n;
   cin>>n;
   int  dp[n+1];
   memset(dp,0,sizeof(dp));
   dp[0]=1;
   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=6;j++)
        {
            if(i-j>=0)
            dp[i]=(dp[i]+dp[i-j])%m;
        }
   }
   cout<<dp[n];
}
