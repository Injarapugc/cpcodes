#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
int tk( vector<vector<int>> &a,int i,int k)
{
    int m=-1;
    for(int j=0;j<3;j++)
    {
        if(j!=i)m=max(m,a[k][j]);
    }
    return m;
}
int solve( vector<vector<int>> &a, vector<vector<int>> &dp,int i,int j)
{
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==0) 
    {
        int m=-1;
        for(int k=0;k<a.size();k++)
        {
            if(j!=k)
            m=max(m,a[0][k]);
        }
        return m;
    }
    int m=0;
    for(int k=0;k<3;k++)
    {
        if(k!=j)
        {
            int jj=0;
            jj=a[i][k]+solve(a,dp,i-1,k);
            m=max(jj,m);
        }
    }
    return dp[i][j]=m;

    
}
int f(int day, int last, vector<vector<int>> &points,vector<vector<int>> &dp) {

  if (dp[day][last] != -1) return dp[day][last];

  if (day == 0) {
    int maxi = 0;
    for (int i = 0; i <= 2; i++) {
      if (i != last)
        maxi = max(maxi, points[0][i]);
    }
    return dp[day][last] = maxi;
  }

  int maxi = 0;
  for (int i = 0; i <= 2; i++) {
    if (i != last) {
      int activity = points[day][i] + f(day - 1, i, points, dp);
      maxi = max(maxi, activity);
    }

  }

  return dp[day][last] = maxi;
}
int main()
{
    ll n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(3));
    for(int i=0;i<n;i++)for(int j=0;j<3;j++)cin>>a[i][j];

    vector<vector<int>> dp(n,vector<int>(4,-1));
    cout<<f(n-1,3,a,dp);

}