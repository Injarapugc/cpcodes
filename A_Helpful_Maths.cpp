#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> g(4,0);
    for(int i=0;i<s.length();i++)
    {
       if(isdigit(s[i]))
       {
          string f="";
          f+=s[i];
          g[stoi(f)]++;
       }
    }
    for(int i=1;i<=4;i++)
    {
        int x1=g[i];
        for(int j=0;j<x1;j++)
        {
            if(x1==1)cout<<i<<" ";
            else cout<<i<<"+";
        }
    }
}