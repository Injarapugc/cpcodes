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
    ll n;
    cin>>n;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    vi e,o;
    fi(i,n,0)
    {
        if(i%2==0&&a[i]>=0)e.pb(a[i]);
        else if(i%2==1&&a[i]>=0)o.pb(a[i]);
    }
    if(e.empty()&&o.empty())
    {
        cout<<*max_element(a.begin(),a.end())<<endl;
        return;
    }
    ll s1=accumulate(e.begin(),e.end(),0LL),s2=accumulate(o.begin(),o.end(),0LL);
    cout<<max(s1,s2)<<endl;
 

  

    
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
