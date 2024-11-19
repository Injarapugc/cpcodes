
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
    ll n,m;cin>>n>>m;
   vector<vector<char>> a(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    fi(i,n,0)fi(j,m,0)cin>>a[i][j];
    
    int r[]={1,-1,0,0},c[]={0,0,-1,1};
    
    fi(i,n,0)fi(j,m,0)vis[i][j]=0;
    fi(i,n,0)
    {
        fi(j,m,0)
        {
            if(a[i][j]=='B')
            {
                fi(k,4,0)
                {
                    int x1=i+r[k],x2=j+c[k];
                    if(x1>=0&&x2>=0&&x1<n&&x2<m)
                    {
                        if(a[x1][x2]=='.')a[x1][x2]='#';
                    }
                }
            }
        }
    }
    queue<pair<int,int>> q;
    if(a[n-1][m-1]=='.')
    {
        q.push({n-1,m-1});
        vis[n-1][m-1]=1;
    }
    while(!q.empty())
    {
        auto[i,j]=q.front();
        
        q.pop();
        fi(k,4,0)
        {
            ll x1=i+r[k],x2=j+c[k];
            if(x1>=0&&x2>=0&&x1<n&&x2<m)
            {
                if(a[x1][x2]!='#'&&vis[x1][x2]==0)
                {
                    q.push({x1,x2});
                    vis[x1][x2]=1;
                }
            }
        }

    }
    ll ans=0;
    fi(i,n,0)
    {
        if(ans==1) break;
        fi(j,m,0)
        {
            if((a[i][j]=='G'&&!vis[i][j])||a[i][j]=='B'&&vis[i][j])
            {
                ans=1;
                break;
            }
        }
        
    }
    if(ans==1)cout<<"No\n";
    else cout<<"Yes\n";


  
 

  

    
}

  
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}
