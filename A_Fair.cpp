
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



void solve() {
    ll m,n,k,s;
    cin>>m>>n>>s>>k;
    vector<vi> goods(s);
    fi(i,m,0)
    {
        ll g;
        cin>>g;
        goods[g-1].push_back(i);
    }
    vector<vi> a(m);
    fi(i,n,0)
    {
        ll x1,x2;
        cin>>x1>>x2;
        x1--,x2--;
        a[x1].push_back(x2);
        a[x2].push_back(x1);
    }
    vector<vi> ans(m,vi(s));
    fi(i,s,0)
    {
        queue<ll> q;
        vi dis(m,1e9);
        for(auto x:goods[i])
        {
            q.push(x);
            dis[x]=0;
        }
        while(!q.empty())
        {
            auto node=q.front();
            q.pop();
            for(auto x:a[node])
            {
                if(dis[node]+1<dis[x])
                {
                    dis[x]=dis[node]+1;
                    q.push(x);
                }
            }
        }
        fi(j,m,0) ans[j][i]=dis[j];
    }
    vi gg;
    fi(i,m,0)
    {
        fi(j,s,0)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    for(auto x:ans)
    {
        ss(x);
        ll sum=0;
        fi(i,k,0)sum+=x[i];
        gg.push_back(sum);
    }
    fi(i,m,0)cout<<gg[i]<<" ";
    
  
  
 

  

    
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
