#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;
int n;
vi rank(n+1),parent(n+1);
ll findpair(int node)
{
    if(node==parent[node]) return node;
    return parent[node]=findpair(parent[node]);
}
void unionfind(int u,int v,vi &rank)
{
    int u1=findpair(u),v1=findpair(v);

    if(u1==v1) return;
    if(rank[u1]<rank[v1])
    {
        parent[u1]=v1;
    }
    else if(rank[v1]<rank[u1])
    {
        parent[v1]=u1;
    }
    else
    {
        parent[v1]=u1;
        rank[u1]++;
    }
}
void solve()
{
    cin>>n;
    fi(i,n+1,0)parent[i]=0;

  
   

}
#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> Rank;
vector<int> parent;
int find(int i){
    if(i==parent[i])
        return i;
        
    return parent[i]=find(parent[i]);
}
void Union(int x,int y){
    int x_parent=find(x);
    int y_parent=find(y);
    
    if(x_parent==y_parent)
        return;
        
    if(Rank[x_parent]>Rank[y_parent])
        parent[y_parent]=x_parent;
    else if(Rank[x_parent]<Rank[y_parent])
        parent[x_parent]=y_parent;
    else{
        parent[x_parent]=y_parent;
        Rank[y_parent]+=1;
    }
}
int solve(vector<vector<int>>& grid){
    parent.resize(n);
    Rank.resize(n,0);
    
    for(int i=0;i<n;i++)
        parent[i]=i;
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1)
                Union(i,j);
        }
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