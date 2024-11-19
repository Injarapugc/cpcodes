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
    vi a(n+1);
    fi(i,n+1,1)cin>>a[i];
    vi p(n+1);
    for(int i=1,j=2;i<=n;j++)
    {
         while(a[i]!=a[j])
         {
             p[i]=j;
             i++;
         }
    }
    ll q;
    cin>>q;
    while(q--)
    {
         ll l,r;
         cin>>l>>r;
         if(p[l]>r)
         {
            cout<<-1<<" "<<-1<<endl;
             
         }
         else cout<<l<<" "<<p[l]<<endl;
    }
    cout<<endl;

 

  

    
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