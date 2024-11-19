#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> a(10000,vector<int>(10000,0));
vector<vector<int>> b(10000,vector<int>(10000,0));
int n;
int gg(int i,int j,int n)
{
    if(i>=n||j>=n) return -1e9;
    if(i==n-1&&j==n-1) return a[i][j];
    int p1,p2;
    p1=p2=0;
     a[i][j]=0;
    if(i+1<n&&a[i+1][j]!=1)
    {
       
        p1=a[i][j]+gg(i+1,j,n)+p1;

    }
    if(j+1<n&&a[i][j+1]!=1)
    {
      
        p2=a[i][j]+gg(i,j+1,n)+p2;
    }
    return max(p1,p2);

}
int gg1(int i,int j,int n)
{
    if(i>=n||j>=n) return -1e9;
    if(i==0&&j==0) return a[i][j];
    int p1,p2;
    p1=p2=0;
     a[i][j]=0;
    if(i-1<0&&a[i+1][j]!=1)
    {
       
        p1=a[i][j]+gg1(i+1,j,n)+p1;

    }
    if(j-1<0&&a[i][j-1]!=1)
    {
      
        p2=a[i][j]+gg1(i,j-1,n)+p2;
    }
    return max(p1,p2);

}
int main()
{
  
    cin>>n;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
    int sum=gg(0,0,n);
    sum+=gg1(n-1,n-1,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<sum;
  
}
