
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

using namespace std;
vi p(26,0);
vi r(26,0);
ll find(ll i)
{
    if(p[i]==i) return i;
    return find(p[i]);
}
void uni(ll i,ll j)
{
    ll x1=find(i),x2=find(j);
    if(x1==x2) return;
    if(r[x1]>r[x2]) p[x1]=x2;
    else if(r[x1]<r[x2]) p[x2]=x1;
    else
    {
        p[x1]=x2;
        r[x2]++;
    }
}

void solve() {
    fi(i,26,0)p[i]=i;
    fi(i,26,0)r[i]=0;
    ll n;
    cin>>n;
    vi used(26,0);
    fi(i,n,0)
    {
        string s;
        cin>>s;
        used[s[0]-'a']=1;
        for(auto c:s)
        {
            uni(s[0]-'a',c-'a');
            used[c-'a']=1;
        }
    }
    ll sum=0;
    fi(i,26,0)
    {
        if(p[i]==i&&used[i])sum++;

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
