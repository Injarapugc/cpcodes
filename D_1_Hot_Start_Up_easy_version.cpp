#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5005;
int a[N],h[N],c[N],n,k;
int f(int i,int p,vector<vector<int>> &dp)
{
   if(i==n) return 0;
   if(dp[i][p]!=-1) return dp[i][p];
   int op1=f(i+1,a[i-1],dp)+(p==a[i]?h[a[i]]:c[a[i]]);
   int op2=f(i+1,p,dp)+(a[i-1]==a[i]?h[a[i]]:c[a[i]]);
   return  dp[i][p]= min(op1,op2);
}
signed main()
{
      int t;
      cin>>t;
      while(t--)
      {
            cin>>n>>k;
            for(int i=0;i<n;i++)cin>>a[i];
            for(int i=1;i<=k;i++)cin>>c[i];
            for(int i=1;i<=k;i++)cin>>h[i];
            vector<vector<int>> dp(n,vector<int>(k+1,-1));
            cout<<c[a[0]]+f(1,0,dp)<<endl;
      }
}
