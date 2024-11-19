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



void solve() {
    string a;
    cin>>a;
    ll n=a.length();
    vi b(n,0);
    ll ans=0;
    fi(i,n-1,0)
    {
        if(a[i]==a[i+1]&&b[i]==0)
        {
            ans++;
            b[i+1]=1;
        }
        if(i+2<=n-1&&a[i]==a[i+2]&&b[i]==0)
        {
             ans++;
             b[i+2]=1;
        }
    }
    cout<<ans<<endl;
 

  

    
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
