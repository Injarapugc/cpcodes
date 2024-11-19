#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;
int dp[10001][5];
int n,k;

int solve(int i,int j)
{
    if(i==n) return j==k;
    if(dp[i][j]!=-1) return dp[i][j];
    int np=solve(i+1,j);
    int p=0;
    if(j+1<=k)
    {
        p=p+solve(i+1,j+1);
    }
    return dp[i][j]=p+np;
    
}
int main()
{
    memset(dp,sizeof(dp),-1);
    cin>>n>>k;
    cout<<solve(0,0);

}