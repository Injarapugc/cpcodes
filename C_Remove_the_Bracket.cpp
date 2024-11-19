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

    ll n,c;
    cin>>n>>c;
  
    vi a(n);
    fi(i,n,0)cin>>a[i];
    vi mi(n),mm(n);
    fi(i,n,0)
    {
        if(a[i]>=c)
        {
            mi[i]=a[i]-c;
            mm[i]=c;
        }
        else{
            mi[i]=0;
            mm[i]=a[i];
        }
    }
    vector<vector<ll>> dp(n,vector<ll>(2,0));
    fi(i,n-1,1)
    {
        if(i==1)
        {
            dp[i][0]=a[0]*mi[1];
            dp[i][1]=a[0]*mm[1];
            continue;

        }
        dp[i][0]=min(dp[i-1][0]+(mm[i-1]*mi[i]),dp[i-1][1]+(mi[i-1]*mi[i]));
        dp[i][1]=min(dp[i-1][0]+(mm[i-1]*mm[i]),dp[i-1][1]+(mi[i-1]*mm[i]));
    }
    ll a1=(dp[n-2][0]+(mm[n-2]*a[n-1]));
    ll a2=(dp[n-2][1]+(mi[n-2]*a[n-1]));
    cout<<min(a1,a2)<<endl;
   

  
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
