#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
//memorization
int f(int i,int j,string s,string q,vector<vector<int>> &dp)
{
    if(i<0||j<0) return 0;
    if(s[i]==q[j])
    {
        dp[i][j]=1+f(i-1,j-1,s,q,dp);   
    }
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=max(f(i,j-1,s,q,dp),f(i-1,j,s,q,dp));

}
/*** one approach
int main()
{
    string s,t;
    cin>>s;
    cin>>t;

	int m=s.length();
	int n=t.length();
	vector<vector<string>> dp(m+1,vector<string>(n+1,""));
     
    vector<int> a;
	 for(int i=1;i<=m;i++)
	 {
		 for(int j=1;j<=n;j++)
		 {
			 if(s[i-1]==t[j-1])
			 dp[i][j]=dp[i-1][j-1]+s[i-1];
			 else
			 {
				 if((dp[i-1][j]).length()>(dp[i][j-1]).length())
				 dp[i][j]=dp[i-1][j];
				 else
				 dp[i][j]=dp[i][j-1];

			 }
			 
		 }
	 }
	cout<<dp[m][n]<<endl;

}
***/
//two pointers opppppp aporach
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
