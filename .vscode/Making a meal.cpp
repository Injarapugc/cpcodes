#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        int a;cin>>a;
        string s[a];
        for(int i=0;i<a;i++)cin>>s[i];
        string s1;
        for(string i:s)
        s1+=i;
        sort(s1.begin(),s1.end());
        int c,o,d,e,h,f,j;
        for(char i:s1 )
        {
            if(i=='c')c++;
            else if(i=='o')o++;
            else if(i=='d')d++;
            else if(i=='e')e++;
            else if(i=='h')h++;
            else if(i=='i')j++;
            else f++;
        }
        c=c/2;
        e=e/2;
        int gg=min(min(o,min(c,e)),min(min(h,f),min(j,d)));
        cout<<gg;

    }
}