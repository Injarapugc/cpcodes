#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=1;
    int f=n*2-2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=f/2;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=l;j++)
        {
            cout<<char(j+64);
        }
        for(int j=1;j<=f/2;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        l+=2;
        f-=2;
    }
    l-=2;
    f+=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=f/2;j++)cout<<" ";
        for(int j=1;j<=l;j++)cout<<"*";
        for(int j=1;j<=f/2;j++)cout<<" ";
        cout<<endl;
        l-=2;
        f+=2;
    }


}