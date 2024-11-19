#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
const int mod=1e9+7;
int riz(ll x,ll y, vector<vector<char>> &a, vector<vector<int>> &dp)
{
    if(x==0&&y==0) return 1;
    if(x<0||y<0) return 0;
     if(a[x][y]=='#') return 0;
    if(dp[x][y]!=-1) return dp[x][y];
    int s=0;
    if(a[x-1][y]!='#')
    s=((s%mod)+riz(x-1,y,a,dp))%mod;
    if(a[x][y-1]!='#')
     s=((s%mod)+riz(x,y-1,a,dp))%mod;
    return dp[x][y]=s;
}

int solve(int i,int j,  vector<vector<char>> &g,  vector<vector<int>> &dp)
{
    if(i<0||j<0) return 0;
    if(i==0&&j==0) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    int s=0;
    if(g[i-1][j]=='.')s=s+solve(i-1,j,g,dp);
    if(g[i][j-1]=='.') s=s+solve(i,j-1,g,dp);
    return dp[i][j]=s;

}
int s(int i,int j,vector<string> &a,vector<vector<int>> &dp)
{
    if(i==0&&j==0) return 1;
    if(i<0||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int su=0;
    if(a[i][j]=='.')
    su=(su%mod+s(i-1,j,a,dp)%mod+s(i,j-1,a,dp)%mod)%mod;
    return dp[i][j]=su;

}
int main()
{
   int n,h;
    cin>>n>>h;
    vector<vector<int>> dp(n,vector<int>(h,-1));
    vector<string> g(n);
    for(int i=0;i<n;i++)cin>>g[i];
    int gg=s(n-1,h-1,g,dp);
    cout<<gg<<endl;





}