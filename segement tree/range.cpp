#include<bits/stdc++.h>
using namespace std;
void con(int i,int j,int n,vector<int> &a,vector<int> &b)
{
    if(i==j)b[n]=a[i];
    else
    {
    
     int m=(i+j)/2;
     con(i,m,n*2,a,b);
     con(m+1,j,n*2+1,a,b);
     b[n]=b[2*n]+b[2*n+1];
    }
}
int sum(int n,int i,int j,int u,int v,vector<int> &a)
{
    if(u>v) return 0;
    if(i==u&&j==v) return a[n];
    int m=(i+j)/2;
    return sum(2*n,i,m,u,min(v,m),a)+sum(2*n+1,m+1,j,max(u,m+1),v,a);
}
int main()
{
    vector<int> a{1,2,3,4,5},b(20);
    con(0,4,1,a,b);
    cout<<b[4];
}
