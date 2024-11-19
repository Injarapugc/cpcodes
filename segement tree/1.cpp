#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int t[N];
int a[N];
void build(int n,int i,int j)
{
    if(i==j)
    {
        t[n]=a[i];
    }
    else
    {
        int m=(i+j)/2;
        build(n*2,i,m);
        build(n*2+1,m+1,j);
        t[n]=min(t[n*2],t[n*2+1]);
    }

}
int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 1e9;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return min(sum(v*2, tl, tm, l, min(r, tm)),
            sum(v*2+1, tm+1, tr, max(l, tm+1), r));
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    build(1,0,n-1);
    cout<<sum(1,0,n-1,2,3);
}
