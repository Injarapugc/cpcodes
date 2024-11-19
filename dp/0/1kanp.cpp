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
int nig(int w,int i,int n,vi &a,vi &b,vector<vector<int>> &dp,int wi)
{
    if(i==n) return 0;
    if(w==wi) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int p,np;
    p=0,np=0;
    if(a[i]+w<=wi) p=b[i]+nig(a[i]+w,i+1,n,a,b,dp,wi);
    np=nig(w,i+1,n,a,b,dp,wi);
    return dp[i][w]=max(p,np);
}

void solve()
{
    int n;
    cin>>n;
    vi a(n),b(n);
    fi(i,n,0)cin>>a[i];
    fi(i,n,0)cin>>b[i];
    int w;
    cin>>w;
    vector<vector<int>> dp(n,vector<int>(w+1,-1));
    cout<<nig(0,0,n,a,b,dp,w);

    
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
