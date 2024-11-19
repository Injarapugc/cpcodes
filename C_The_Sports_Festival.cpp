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
    vi a(n+1);
    fi(i,n+1,1)cin>>a[i];
    sort(a.begin(),a.end());
    vector<vi> dp(n+1,vi(n+1,1e15));
    for(int i=n;i>=0;i--)
    {
      fi(j,n+1,i)
      {
         if(i==j) dp[i][j]=0;
         else dp[i][j]=min(dp[i][j-1],dp[i+1][j])+a[j]-a[i];
      }

    }
    cout<<dp[1][n]<<endl;

    
    
}

  
int main()
{
  ll t=1;
  
  while(t--)
  {
    solve();
  }
}
