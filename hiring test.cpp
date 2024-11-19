#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n,m;cin>>n>>m;
        int x,y;cin>>x>>y;
        while(n--)
        {
            int c1=0,c2=0;
            string s;cin>>s;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='F')
                {
                    c1=c1+1;
                }
                else if(s[i]=='P')
                {
                    c2=c2+1;
                }
            }
            if(c1>=x||(c1)==(x-1)&&c2>=y)cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
}