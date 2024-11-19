#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector<int> b;
int one(int n,vector<int> a,int l,int r)
{
    int s=0;
    l--;
    for(int i=l;i<r;i++)
    s+=a[i];
    return s;
}
int two(int n,vector<int> b,int l,int r)
{
    int s=0;
    l--;
    for(int i=l;i<r;i++)
    s+=a[i];
    return s;
}
int maini()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    b={a.begin(),a.end()};
    sort(b.begin(),b.end());
    int tc;cin>>tc;
    while (tc--)
    {
        int m,l,r;
        cin>>m>>l>>r;
        if(m==1)
        {
            cout<<one(n,a,l,r)<<endl;
        }
        else
        cout<<one(n,a,l,r)<<endl;

    }
    
}