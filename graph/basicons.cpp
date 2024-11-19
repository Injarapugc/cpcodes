#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> riz(n+1);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        riz[x].push_back(y);
        riz[y].push_back(x);
    }
    

} 