#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n;
        int o,z;
        o=z=0;
        while(n--)
        {
            int v;cin>>v;
            if(v==0)z++;
            else o++;
        }
        int l=120-n;
        int ans=((o/120)+(l/120))*100;
        if(ans>=75)cout<<"YES\n";
        else cout<<"NO\n";
    }
}