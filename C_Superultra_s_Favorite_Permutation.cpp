                  
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
ll findp1(ll n)
{
    if(n==2||n==3) return 1;
    ll a=n,b=n;
    b++;
    a--;
    if(a%6==0 || b%6==0) return 1;
    return 0;
}
using namespace std;



void solve() {
    ll n;
    cin>>n;
    ll o,e;
    if(n<=4)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;i+=2)
    {
        ll k=0;
        for(int j=2;j<=n;j+=2)
        {
            if(!(findp1(i+j)))
            {
                 o=i,e=j;
                 k=1;
                 break;
            }
        }
        if(k==1) break;
    }
    vi a1,a2;
    for(int i=1;i<=n;i+=2)
    {
        if(i==o)continue;
        a1.pb(i);
    }
    a1.pb(o);
    a1.pb(e);
    for(int i=2;i<=n;i+=2)
    {
        if(i==e)continue;
        a1.pb(i);
        
    }
   for(auto x:a1)cout<<x<<" ";
   cout<<endl;
  
 

  

    
}

  
int main()
{
   ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}
