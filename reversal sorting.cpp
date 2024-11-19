#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n,x;cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int flag=1;
        int s=0;
        for(int i=0;i<n;i++)
        {
           for(int j=i+1;j<n;j++)
           {
               if(a[i]>a[i+1])
            {
                s+=a[i];
            }
            else break;
            if(s>x)
            {
                flag=1;
                break;
            }
            else flag=0;
           }
        }
        if(flag==1)cout<<"NO\n";
        else cout<<"YES\n";
    }
}