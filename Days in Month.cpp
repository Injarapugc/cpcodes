#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int a1;cin>>a1;
        string s;cin>>s;
        int a[7];
        a[0]=a[1]=a[2]=a[3]=a[4]=a[5]=a[6]=0;
        a1=a1/7;
        a[0]=a[1]=a[2]=a[3]=a[4]=a[5]=a[6]=a1;
        if(a1%7==0)
        {
            continue;
        }
        else{
            int i;
            if(s=="mon")i=0;
            else if(s=="tues")i=1;
            else if(s=="wed")i=2;
            else if(s=="thurs")i=3;
            else if(s=="fri")i=4;
            else if(s=="sat")i=5;
            else i=6;
            int c=a1%7;
            while(c--)
            {
                a[i]++;
                i++;
            }
        }
        for(auto i:a)cout<<i<<" ";
        cout<<endl;
    }
}