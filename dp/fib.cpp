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
int dp[1000];
int f(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return f(n - 1) + f(n - 2);
}
int ans(int i)
{ 
     if(i==0) return 0;
     if(i==1) return 1;
     if(dp[i]!=0) return dp[i];
 
    return dp[i]=ans(i-1)+ans(i-2);
}
void solve()
{
    dp[0]=0;
    dp[1]=1;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];

    }
    cout<<dp[n]<<" "<<f(n);
    
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
