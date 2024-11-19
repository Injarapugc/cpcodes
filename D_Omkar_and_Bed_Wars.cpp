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
int helper(int i,string &si,vector<vector<vector<int>>> &dp,int sl,int l,int f,int s)
{
    int n=si.length();
    if(i==n-1)
    {
        int ch=5e5;
        if((sl!=0||l!=0)&&(f!=0||s!=0)&&(l!=0||f!=0))
        {
            ch=min(ch,si[i]!='L'?1:0);
        }
         if((sl!=1||l!=1)&&(f!=1||s!=1)&&(l!=1||f!=1))
        {
            ch=min(ch,si[i]!='R'?1:0);
        }
        return ch;
    }
    if(dp[i][sl][l]!=-1) return dp[i][sl][l];
    int ch=5e5;
    if(sl!=0||l!=0)
    ch=min(ch,(si[i]!='L'?1:0)+helper(i+1,si,dp,l,0,f,s));
     if(sl!=1||l!=1)
    ch=min(ch,(si[i]!='R'?1:0)+helper(i+1,si,dp,l,1,f,s));
    return dp[i][sl][l]=ch;  

}
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=n;
    fi(i,2,0)
    {
        fi(j,2,0)
        {
            vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(2,-1)));
            int c1=i==0?s[0]!='L':s[0]!='R';
            int c2=j==0?s[1]!='L':s[1]!='R'; 
            int x=helper(2,s,dp,i,j,i,j)+c1+c2;
            if(ans>x)ans=x;

        }
    }
    cout<<ans<<endl;
  


    
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