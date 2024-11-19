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


void solve()
{
    ll n,m;
    string s,t;cin>>s>>t;
    n=s.length(),m=t.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    fi(i,n+1,0)dp[i][0]=0;
    fi(i,m+1,0)dp[0][i]=0;
    fi(i,n+1,1)
    {
        fi(j,m+1,1)
        {
            if(s[i-1]==t[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];

            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
  int l=dp[n][m];
    string ans="";
    int i=n,j=m;
    while (i>0&&j>0)
    {
        if(s[i-1]==t[j-1]) 
        {
            ans+=s[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1])
        {
            i--;
        }
        else j--;
    }
	cout<<ans;	


}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
