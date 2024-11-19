#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        if(x1+x2==x3||x2+x3==x1||x1+x3==x2)cout<<"YES\n";
        else cout<<"NO\n";
    }
}