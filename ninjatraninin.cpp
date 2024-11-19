#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<vector<int>> &r,int l)
{
    if(n==0)
    {
        int m=0;
        for(int i=0;i<=2;i++)
        {
            if(i==l) continue;
            m=max(m,r[0][i]);

        }
        return m;
    }
    int m=0;
    for(int t=0;t<3;t++)
    {
        if(t!=l)
        {
            int p=r[n][t]+f(n-1,r,t);
            m=max(m,p);
        } 
    }
    return m; 

}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
}