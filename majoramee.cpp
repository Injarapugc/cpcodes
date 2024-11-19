#include<bits/stdc++.h>
using namespace std;

int n,m;
int g(int i,int j,int x,int y, vector<vector<int>> &a)
{
    if(i<0||j<0) return 0;
    if(i==0&&j==0) return 1;
    if(a[i][j]==1) return 0;
    int ans=0;
    ans=g(i-1,j,x,y,a)+g(i,j-1,x,y,a);
    return ans;
}
int main()
{
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    vector<vector<int>> a(n,vector<int>(m,0));
    x--;
    y--;
    a[x][y]=1;
    cout<<g(n-1,m-1,x,y,a);

}