#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> adj[n+1];
    vector<bool> freq(n+1,0);
    queue<int> active;
    vector<int> bfs;
    active.push(0);
    freq[0]=1;
    while(!active.empty())
    {
        int f=active.front();
        active.pop();
        bfs.push_back(f);
        for(auto x:adj[f])
        {
            if(!freq[x])
            {
                active.push(x);
                freq[x]=1;
            }
        }
    }



}