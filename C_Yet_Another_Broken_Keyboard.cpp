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



void solve() {
    ll n,k;
    cin>>n>>k;
    string s;cin>>s;
    vi a(26,0);
    fi(i,k,0)
    {
        char g;
        cin>>g;
        int ff=int(g)-97;
        a[ff]=1;
    }
    ll ans=0;
    ll f=0,t,p=0;
    fi(i,n,0)
    {
         t=int(s[i])-97;
         
        if(a[t]==0)
        {
            ans+=f;
            f=0;
            p=1e9;
        }
        else
        {
            if(p>i)p=i;
            if(p!=i)
            {
                ll jj=i-p;
                jj++;
                f=((jj)*(jj+1))/2;
            }
            else f=1;
            if(i==n-1)ans+=f;

            
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
