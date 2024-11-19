#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto &x:a)cin>>x;
    set<int> riz;
    for(int i=0;i<n;i++)
    {
        riz.insert(a[i]);
    }
    int i=1;
    auto it=riz.begin();
    
}