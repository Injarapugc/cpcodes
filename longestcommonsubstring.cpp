#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int f(string s,string q,int i,int j,int ans)
{
    if(i<0||j<0) return ans;
    if(s[i]==q[j])
    {
        ans=f(s,q,i-1,j-1,ans+1);
    }
    ans=max({ans,f(s,q,i-1,j,0),f(s,q,i,j-1,0)});
    return ans;
}
int lcs(string &s1, string &s2){
    
    int n = s1.size();
    int m = s2.size();
    
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));

    int ans = 0;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                int val = 1 + dp[i-1][j-1];
                dp[i][j] = val;
                ans = max(ans,val);
            }
            else
                dp[i][j] = 0;
        }
    }
    
    return ans;
    
}
