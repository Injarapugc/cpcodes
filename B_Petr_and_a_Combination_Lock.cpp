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


ll n;
ll a[15];
ll dp[2701];
ll S;
bool riz(int i,ll s)
{
    
    if(i==n)
    {
        if(s%360==0) return 1;
        return 0;
    }
    
    if(dp[s]!=-1) return dp[s];
   
    return dp[s]=riz(i+1,s+a[i])+riz(i+1,s-a[i]);
}
void solve() {
    cin>>n;
    fi(i,n,0)cin>>a[i];
    fi(i,2702,0)dp[i]=-1;
    if(riz(0,0))cout<<"YES\n";
    else cout<<"NO\n";
    
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
