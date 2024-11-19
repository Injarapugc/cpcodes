#include<bits/stdc++.h>
using namespace std;
vector<int> gg(string s)
{
    int n=s.length();
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        char g=s[i];
        if(!isdigit(s[i]))
        {
            vector<int> left=gg(s.substr(0,i));
            vector<int> right=gg(s.substr(i+1));
            for(auto l:left)
            {
                for(auto r:right)
                {
                    if(g=='+') ans.push_back(l+r);
                    else if(g=='-') ans.push_back(l-r);
                   else if (g=='*') ans.push_back(l*r);
                }
            }


        }
    }
    if(ans.empty())ans.push_back(atoi(s.c_str()));
    return ans;
}
int main()
{
    string ans;
    cin>>ans;
    vector<int> a=gg(ans);
    for(auto x:a)cout<<x<<" ";
}