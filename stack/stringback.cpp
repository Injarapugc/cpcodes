#include<bits/stdc++.h>
using namespace std;
string riz(string &s)
    {
        stack<char> l;
        for(auto r:s)
        {
            if(l.empty()) l.push(r);
            else if(r=='#'&&!l.empty()) l.pop();
            else if(r!='#') l.push(r);
        }
        string ans="";
        while(!l.empty())
        {
            ans+=l.top();
            l.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main()
{
    string s="y#fo##f";
    string l="y#f#o##f";
    s=riz(s);
    l=riz(l);
    cout<<s<<" "<<l<<endl;

}    