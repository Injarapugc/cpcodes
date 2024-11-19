#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while (tc--)
    {
        int a,p,n;cin>>a;
        p=n=0;
        while(a--)
        {
            int b;cin>>b;
            if(b==1)p++;
            else n++;
        }
        if(n>=p-1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}