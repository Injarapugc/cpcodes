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
    vector<string> a(n);
    fi(i,n,0)cin>>a[i];
    for(int i=n-1;i>=0;i--)
    {
        for(int j=3;j>=0;j--)
        {
            if(a[i][j]=='#')cout<<j+1<<" ";
        }
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