#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
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



void solve() {
    ll n;
    cin>>n;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    ll i=0,j=0;
    ss(a);
    ll ans=0;
    while(true)
    {
      if(i==n||j==n) break;
        if(a[j]-a[i]<=5)
        {
           
            ans=max(ans,j-i);
            j++;
        }
        else i++;
    }
    cout<<ans+1<<endl;

    
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}