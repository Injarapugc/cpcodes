#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
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
vi dp(200006,0);
ll g(ll i)
{
    ll res=0;
    while(i>0)
    {
        res+=i%10;
        i/=10;
    }
    return res;
}
void d()
{
    dp[0]=0;
    fi(i,200005,1)
    {
        dp[i]=dp[i-1]+g(i);
    }

}
void solve() {
    ll n;
    cin>>n;
    cout<<dp[n]<<endl;
    
    
}

  
int main()
{
  ll t;
  cin>>t;
  d();
  while(t--)
  {
    solve();
  }
}
