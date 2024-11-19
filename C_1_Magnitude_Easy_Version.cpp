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
ll n;
const int N=2e5+2;
ll a[N];
ll ans=INT_MIN;
ll dp[N];

void solve() {
    cin>>n;
    fi(i,n,0)cin>>a[i];
    ll mn=0,mx=0;
    fi(i,n,0)
    {
        ll x=a[i];
         ll a1=mn+x,a2=mx+x,a3=abs(mn+x),a4=abs(mx+x);
         mn=min({a1,a3,a2,a4});
         mx=max({a1,a2,a3,a4});
    }
    cout<<mx<<endl;
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
