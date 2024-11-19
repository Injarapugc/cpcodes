#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int f(int i,int j,string &s,string &q,vector<vector<int>> &dp)
{
    if(i<0||j<0) return 0;
    if(s[i]==q[j])
    {
        dp[i][j]=1+f(i-1,j-1,s,q,dp);
    }
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=max(f(i,j-1,s,q,dp),f(i-1,j,s,q,dp));
}
void solve()
{
    string s,q;
    cin>>s>>q;
    int s1=s.length();
    vector<vector<int>> dp(s1,vector<int>(q.length(),-1));
    cout<<f(s.length()-1,q.length()-1,s,q,dp);
    
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}