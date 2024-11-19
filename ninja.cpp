#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int solve(int day,int last,vector<vector<int>> &dp,vector<vector<int>> &a)
{
    if(dp[day][last]!=-1) return dp[day][last];
    if(day==0)
    {
        int m=0;
        for(int i=0;i<=2;i++)
        {
            if(i!=last)
            {
                m=max(m,a[0][i]);
            }
        }
        return dp[day][last]=m;
    }
    int m=0;
    for(int i=0;i<=2;i++)
    {
        if(i!=last)
        {
            int ac=a[day][i]+solve(day-1,i,dp,a);
            m=max(ac,m);
        }
    }
  return dp[day][last]=m;


    
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
  }
}