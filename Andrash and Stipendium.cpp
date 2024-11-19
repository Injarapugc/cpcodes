#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int a;cin>>a;
        int t,f;
        t=f=0;
        int sum=0;
        while(a--)
        {
            int b;cin>>b;
            if(b==5)f++;
            if(b<=2)t++;
            sum+=b;
        }
        sum=sum/a;
        if(f<1)cout<<"No\n";
        else if(t>0)cout<<"no\n";
        else if(sum<4)cout<<"no\n";
        else cout<<"Yes\n";

    }
}