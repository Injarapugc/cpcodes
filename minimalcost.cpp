#include<bits/stdc++.h>
using namespace std;
int riz(int n,int k,vector<int> &a,vector<int> &dp)
{
    if(n==0)
    {
       return 0;
       
    }
     if(dp[n]!=-1) return dp[n];
    int mmst=INT_MAX;
    for(int i=1;i<k+1;i++)
    {
        if(n-i>=0)
        {
         int ans=riz(n-i,k,a,dp)+abs(a[n]-a[n-i]);
          mmst=min(ans,mmst);
        }
    }
    return dp[n]=mmst;
    

}
int main()
{
    
    vector<int> a{30,10,60 , 10 , 60 , 50};
    vector<int> dp(7,-1);
    dp[0]=0;
    cout<<riz(5,2,a,dp);

}