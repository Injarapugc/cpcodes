#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int t[N],a[N];
void build(int n,int i,int j)
{
    if(i==j)
    {
        if(a[i]==0)t[n]+=1;
    }
    else
    {
        int m=(i+j)/2;
        build(n*2,i,m);
        build(n*2+1,m+1,j);
        t[n]=t[n*2]+t[n*2+1];
    }
}
int fink(int i,int j,int n,int k)
{
    if(k>t[n])
    {
        return -1;
    }
    if(i==j) return j;
    int m=(i+j)/2;
    if(t[n*2]>=k)
    {
        return fink(i,m,n*2,k);
    }
    else return fink(m+1,j,n*2+1,k-t[n*2]);


}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    build(1,0,n-1);
    cout<<fink(0,n-1,1,3);

}