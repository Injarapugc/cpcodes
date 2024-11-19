#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n,x,k;cin>>n>>x>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int sum=0;
        int s=1;
        for(int i=0;i<n;i++)
        {
            if(sum>=x)
            {
                s=0;
                break;
            }
            else
            {
                int b1=abs(a[i]-b[i]);
                if(b1<=k)sum++;
            }
        }
        if(s==0)cout<<"yes\n";
        else cout<<"No\n";

    }
}