#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        int a[n];
        int t=0;
        int o=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==2)t++;
            if(a[i]==0)o++;
        }
        int ans=0;
        ans=((t*(t-1))/2)+((o*(o-1))/2);
        cout<<ans<<endl;

    }
}