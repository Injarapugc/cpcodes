
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    vector<vector<int>> grid{{1,2,4},{3,3,1}};
    int n=grid.size();
        for(int i=0;i<n;i++)
        {
            sort(grid[i].begin(),grid[i].end());
        }
        int m=-100000;
        int s=0;
        for(int i=0;i<=n;i++)
        {
            m=-11;
          for(int j=0;j<=n;j++)
          {
             cout<<grid[j][i]<<" ";
          }
          cout<<endl;
        }


  


    
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