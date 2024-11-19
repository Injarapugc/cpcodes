#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
string findLCS(int n, int m,string &s, string &q){
	
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    for(int i=0;i<=n;i++)dp[i][0]=0;
    for(int i=0;i<=m;i++)dp[0][i]=0;
    //tabulation
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i-1]==q[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int l=dp[n][m];
    string ans;
    for(int i=0;i<l;i++) ans+='.';
    int k=l-1;
    int i=n,j=m;
    while (i>0&&j>0)
    {
        if(s[i-1]==q[j-1]) 
        {
            ans[k--]=s[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1])
        {
            i--;
        }
        else j--;
    }
	return ans;	
}

int main()
{
    string s,t;
    cin>>s;
    cin>>t;

	int m=s.length();
	int n=t.length();
	vector<vector<string>> dp(m+1,vector<string>(n+1,""));
	cout<<findLCS(s.length(),t.length(),s,t);

}