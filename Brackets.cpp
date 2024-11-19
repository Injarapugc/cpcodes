#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        string s;cin>>s;
        int l,ml;
        l=ml=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')l++;
            else l--;
            ml=max(ml,l);
        }
        for(int i=0;i<ml;i++)cout<<"(";
        for(int i=0;i<ml;i++)cout<<")";
        cout<<endl;

    }
    
}