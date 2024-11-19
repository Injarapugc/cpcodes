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
    vi p(n),s(n);
    p[0]=a[0],s[n-1]=a[n-1];
    fi(i,n,1)p[i]=a[i]+p[i-1];
    for(int i=n-2;i>=0;i--)s[i]=s[i+1]+a[i];
   
    ll ans=0;
    ll i=0,j=n-1;
    while(i<j)
    {
        
        if(p[i]==s[j])
        {
           
            ans=p[i];
            i++;
            
            
        }
        else if(p[i]<s[j])++i;
        else --j;
       
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
