#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
multiset<pair<int,int>> a;
void solve()
{
    a.clear();
    int n,m;
    cin>>n>>m;
    int ai[101][101];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            int x;
            cin>>x;
            a.insert({x,i});
            ai[i][j]=-1;
        }
    }
    for(int i=0;i<m;i++)
    {
        auto it=a.begin();
        ai[it->second][i]=it->first;
        a.erase(it);
    }
    while (!a.empty())
    {
        auto it=a.begin();
        int i=0;
        while(ai[it->second][i]!=-1)i++;
        ai[it->second][i]=it->first;
        a.erase(it);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ai[i][j]<<" ";
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