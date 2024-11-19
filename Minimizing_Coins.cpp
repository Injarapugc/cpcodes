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
 
ll s(ll su,ll i,vi &a,	vector<ll> &dp)
{
	if(su<=0)
	{
		if(su==0) return 0;
		return -1;
	}
	int n=a.size();
	if(dp[su]!=-1) return dp[su];
	
	ll ans=INT_MAX;
	fi(j,n,0)
	{
		
	    ll val=(1+s(su-a[j],j,a,dp))%mod;
		if(val!=-1)
		ans=min(val+1,ans);
	}

	return dp[su]=ans;
 
}
void solve()
{
	ll n,su;
	cin>>n>>su;
	vi a(n);
	fi(i,n,0)cin>>a[i];
	vector<ll> dp(su+1,1e9);
	dp[0]=0;
	
	fi(i,su+1,1)
	{
		fi(j,n,0)
		{
			if(i-a[j]>=0) dp[i]=min(dp[i],dp[i-a[j]]+1);

		}
	}
	if(dp[su]==1e9)dp[su]=-1;
	cout<<dp[su];
	 
	
 
}
  
int main()
{
  ll t=1;
  
  while(t--)
  {
    solve();
  }
}
