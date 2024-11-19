#include<bits/stdc++.h>
using namespace std;
int count(int a)
{
    int c=1;
    int n=9;
    while(n<=a)
    {
        n=n*9;
        c++;
    }
    return c;
}
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int a,b;cin>>a>>b;
        a=count(a);
        b=count(b);
        int ans=0;
        if(a>=b)ans=0;
        else ans=1;
        cout<<ans<<" "<<abs(a-b)<<endl;

    }
}