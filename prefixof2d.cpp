#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int,int> a;
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)cin>>a[i][j];
    }
    vector<int,int> p;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)cout<<p[i][j]<<endl;
    }




}
