#include<bits/stdc++.h>
using namespace std;
int riz(int n,vector<int> &a,vector<int> &dp)
{
    if(n<0) return 0;
    if(n==0) return a[n];
    if(dp[n]!=-1) return dp[n];
    int p=a[n]+riz(n-2,a,dp);
    int np=0+riz(n-1,a,dp);
    return dp[n]=max(p,np);
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> dp(n+1,-1);
    dp[0]=0;
    cout<<riz(n,a,dp);

}