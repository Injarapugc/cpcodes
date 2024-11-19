#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int main()
{
    string r;
    cin>>r;
    int n=r.length();
    string a{r.rbegin(),r.rend()};
    cout<<max(r,a);
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(r[i-1]==a[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    if(n-dp[n][n]==0||n-dp[n][n]==1) cout<<"1";
}