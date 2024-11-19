#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define mod 1000000007
using namespace std;
int dp[2005][2005];
int solve(int i,int m,int n,int j)
{
  
    if(j==0) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    for(int k=i;k<=m;k+=i)
    {
        ans=ans+solve(k,m,n,j-1);
    }
    return dp[i][j]=ans;

}
int solve(int m,int i,int j)
{
    if(m==0) return 1;
    if(dp[i][m]!=-1) return dp[i][m];
    int ans=0;
    for(int k=i;k<=j;k+=i)
    {
        ans=ans+solve(m-1,k,j)%mod;
    }
    return dp[i][m]=ans%mod;
 
 
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)dp[1][i]=1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=j;k<=n;k+=j)
            {
                dp[i][k]=(dp[i][k]+dp[i- 1][j])%mod;
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++)ans=(ans+dp[m][i])%mod;
    cout<<ans;



}