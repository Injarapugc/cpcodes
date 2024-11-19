#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int solve(string s,string f,int i,int j,vector<vector<int>> &dp)
{
    if(i<0) return 1;
    if(j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int su=0;
    if(s[i]==f[j])
    {
        su=su+solve(s,f,i-1,j-1,dp);
    }
    su=su+solve(s,f,i,j-1,dp);
    return dp[i][j]=su;

    
}
int main()
{
    string l,n;
    cin>>l>>n;
    int k=l.length();
    int f=n.length();
    vector<vector<int>>dp (k,vector<int>(f,-1));
    cout<<solve(l,n,k-1,f-1,dp);


}