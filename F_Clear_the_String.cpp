#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
#define pb push_back
#define pob pop_back
#define ss(a) sort(a.begin(),a.end())
/*
      "Beloved,
       never avenge yourselves,
        but leave it to the wrath of God, for it is written,
        Vengeance is mine, I will repay" - ROMAN 12:19
 */

/*
    Remeber the pain
    Remeber how worthless they made you feel
    Turn that pain into anger
    and show them who you're really are
*/

using namespace std;
/*** 
ll dp[501][501];
ll n;
string a;
ll g(ll i, ll j)
{ 
    if(i>j) return 0;
    if(i==j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    ll ans=1+g(i+1,j);
    fi(k,n,i+1)
    {
        if(a[i]==a[k])ans=min(ans,g(i+1,k-1)+g(k,j));
    }
    return dp[i][j]=ans;
}




void solve() {
    cin>>n>>a;
    memset(dp,1,sizeof(dp));
    cout<<g(0,n-1)<<endl;
    fi(i,n,0)
    {
        fi(j,n,0)
        {
            dp[i][j]=1+;
            fi(k,n,j+1)
            {
                if(a[j]==a[k])dp[i][j]=min(dp[i][j],dp[j+1][k-1]+dp[k][])

            }
        }
    }
 

  

    
}
***/
int f[1000][1000];
 
void solve()
{
	memset(f,0x3f,sizeof f);
    int n;cin>>n;
    string s;cin>>s;
    s=' '+s;
 
    for(int i=1;i<=n;i++) f[i][i]=1;
 
    for(int len=0;len<n;len++)
    {
    	for(int i=1;i<=n;i++)
    	{
    		int j=i+len;
    		for(int k=i;k<=i+len&&k<=n;k++)
    		{
    			if(s[i]==s[j])
    			f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]-1);
    			else
    			f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]);
    		}
    	}
    }
 
 
    cout<<f[1][n]<<endl;
 
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
