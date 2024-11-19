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
    string s;
    cin>>s;
    ll a=0,b=0,c=0;
    fi(i,s.length(),0)
    {
        if(s[i]=='o')b+=a;
        else if(i-1>=0&&s[i-1]=='v')
        {
            a++;
            c+=b;
        }
    }
    cout<<c<<endl;
 

  

    
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
