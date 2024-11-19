                  
#include <iostream>     // For input/output operations
#include <vector>       // For vector container
#include <string>       // For string operations
#include <algorithm>    // For algorithms like sort, binary_search, etc.
#include <cmath>        // For mathematical functions
#include <map>          // For map container
#include <set>          // For set container
#include <queue>        // For queue and priority_queue
#include <stack>        // For stack container
#include <deque>        // For deque container
#include <list>         // For list container
#include <bitset>       // For bitset operations
#include <cstring>      // For C-style string functions
#include <cstdio>       // For C-style I/O functions
#include <cstdlib>      // For general purpose functions
#include <ctime>        // For time-related functions
#include <utility>      // For pair, make_pair, etc.
#include <numeric>      // For numeric operations
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
ll pow(ll x,ll g)
{
    if(x==0) return 1;
    ll gg=pow(x/2,g);
    if(x%2) return gg*gg*g;
    return gg*gg; 
}
using namespace std;
vi a(30,0);
vector<int> ans;
bool g(ll s)
{
    if(s<0) return 0;
    for(int i=29;i>=0;i--)
    {
        if(a[i]==0)continue;
        ll use=min((ll)a[i],s/(1LL<<i));
        s-=use*(1LL<<i);
        fi(j,use,0)ans.pb(1LL<<i);
    }
    return s==0;


}



void solve() {
    ll n;
    cin>>n;
    fi(i,30,0)a[i]=0;
    fi(i,n,0)
    {
        ll x1,x2;
        cin>>x1>>x2;
        if(x1==1)a[x2]++;
        else
        {
            if(g(x2))cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    for(auto x:ans)cout<<x<<" ";
   
  
 

  

    
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
