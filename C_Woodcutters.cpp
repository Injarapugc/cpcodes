
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

bool g(pair<ll,ll> &a,pair<ll,ll> &b)
{
    return a.second<b.second;
}

void solve() {
   ll n;
    cin>>n;
    vector<ii> a(n);

    for( auto &x:a)
    {
        cin>>x.first>>x.second;
    }
    sort(a.begin(),a.end());
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    ll sum=0;
    sum+=2;
    fi(i,n-1,1)
    {
        if((a[i].first-a[i].second)>a[i-1].first)
        {
            sum++;
            continue;
        }
        if((a[i].first+a[i].second)<a[i+1].first)
        {
            sum++;
            a[i].first=a[i].first+a[i].second;
        }
    }
    cout<<sum<<endl;


 


    
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
