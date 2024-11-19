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
    string a,b;
    cin>>a>>b;
    vi aa;
    fi(i,n,0)
    {
        if(a[i]!=b[i])aa.push_back(i+1);
    }
    aa.resize(aa.size());
    ll ans=0;
    sort(aa.begin(),aa.end());
     n=aa.size();
    for(int i=0;i<aa.size();i++)
    {
        if(i<n-1&&abs(aa[i]-aa[i+1])<2&&a[aa[i]-1]!=a[aa[i+1]-1])
        {
            ans+=abs(aa[i]-aa[i+1]);
            i++;
        }
        else
        {
            ans+=1;
        }

    }
    cout<<ans<<endl;
 

  

    
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
