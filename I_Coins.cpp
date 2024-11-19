#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n,x) for (int i = x; i < int(n); i++)
using namespace std;
double a[3009];
double dp[3005][3005];
double solve(int i,int k,int n)
{
    if(i==n) 
    {
        if(k>=(n-k)) return 1.0;
        return 0.0;
    }
    if(dp[i][k]!=-1.0) return dp[i][k];
    double p,np;
    np=p=0;
    p=p+(a[i]*(solve(i+1,k+1,n)));
    np=np+(1.0-a[i])*solve(i+1,k,n);
    return dp[i][k]=np+p;


    
}
int main()
{
   
    int n;
    cin>>n;
    for(int i=0;i<3005;i++)for(int j=0;j<3005;j++)dp[i][j]=0.0;
    fo(i,n,0)cin>>a[i];
    dp[0][0]=1;
    fo(i,n+1,1)
    {
        fo(j,i+1,0)
        {
            if(j==0) dp[i][j]=dp[i-1][j]*(1-a[i-1]);
            else dp[i][j]=dp[i-1][j]*(1-a[i-1])+dp[i-1][j-1]*(a[i-1]);
        }
    }
    double ans=0.0;
    for(int i=n;i>(n/2);i--)ans+=dp[n][i];
    printf("%.12f",ans);


    //tabulation

}