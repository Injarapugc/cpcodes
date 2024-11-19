#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<bool> is;
vector<vector<int>> g;
void dfs(int u)
{
    is[u]=true;
    for(auto v:g[u])
    {
        if(!is[v])
        {
            dfs(v);
        }
    }
}
// no.of componenets in graph
int count()
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(!is[i])
        {
            dfs(i);
            c++;
        }
    }
    return c;
}

