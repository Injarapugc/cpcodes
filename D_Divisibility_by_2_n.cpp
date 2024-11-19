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
    ll ii=0;
    fi(i,n,0)
    {
        cin>>a[i];
        while (a[i]>0&&a[i]%2==0)
        {
            a[i]/=2;
            ii++;
        }
    }
    vi v;
    fi(i,n+1,1)
    {
        ll x=i;
        ll c=;
        while(x>0&&x%2==0)
        {
            c++;x/=2;
        }
        v.push_back(c);
    }
    ss(v);
    ll ans=0;
    while (ii<n&&v.size())
    {
        ii+=v.back();
        v.pop_back();
        ans++;
    }
    if(ii<n) ans=-1;
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
