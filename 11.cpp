#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int m,n;cin>>m>>n;
        int a[m];
        for(int i=0;i<m;i++)cin>>a[i];
        int maxi,s;
        maxi=s=0;
        int c=0;
        for(int i=0;i<m-n+1;i++)
        {
            for(int j=i;j<m;j++)
            {
                s+=a[j];
                c++;
                if(c==n)
                    break;
            }
            maxi=max(s,maxi);
            c=0;
        }
        cout<<maxi<<endl;
    }
}