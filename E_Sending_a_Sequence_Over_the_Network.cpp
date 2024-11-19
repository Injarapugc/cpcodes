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

void solve() {
 
ll n;





  cin>>n;
  vi a(n+1),dp(n+1,0);
  fi(i,n+1,1)cin>>a[i];
  dp[0]=1;
  fi(i,n+1,1)
  {
    if(i+a[i]<=n&&dp[i-1])dp[i+a[i]]=1;
    if(i-a[i]-1>=0&&dp[i-a[i]-1])dp[i]=1;
  }
  if(dp[n])cout<<"YES\n";
  else cout<<"NO\n";

    
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
