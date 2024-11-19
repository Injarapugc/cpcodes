#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(t&1)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int> a(t);
        a[0]=t;
        int g=t;
        g-=2;
        for(int i=1;i<t;i++)
        {
            if(i&1)
            {
                a[i]=i;
            }
            else
            {
                a[i]=g;
                g-=2;
            }
        }
         for(int i=0;i<t;i++)cout<<a[i]<<" ";
         cout<<endl;
    }
   
}