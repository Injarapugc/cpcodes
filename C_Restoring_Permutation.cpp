
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

#define MAXN 210
int b[MAXN];

void solve() {
    vector<int> v;
    ll n,m;
        int mp[MAXN]={0};
        cin >> n;
        m=2*n;
        
        for(int i=1;i<=n;i++)
        {
            cin >> b[i];
            mp[b[i]]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            v.push_back(b[i]);
            for(int j=b[i]+1;j<=m;j++)
                if(mp[j]==0)
                {
                    mp[j]=1;
                    v.push_back(j);
                    break;
                }
        }
        
        
        if(v.size()==m)
        {
            for(int i=0;i<m;i++)
                cout << v[i] << ' ';
            cout << endl;
        }
        else cout << -1 << endl;

  
 

  

    
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
