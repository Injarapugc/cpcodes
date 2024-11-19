#include<bits/stdc++.h>
using namespace std;
void gg(int i,string f,string g,map<char,string> &a,vector<string> &ans)
{
    if(i==f.length())
    {
        ans.push_back(g);
        return ;
    }
    string l=a.at(f[i]);
    for(char x:l)
    {
        gg(i+1,f,g+x,a,ans);
    }
}
int main()
{
    string s;
    cin>>s;
     map<char,string> r={
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
     }; 
     vector<string> ans;
     gg(0,s,"",r,ans);
     
     
   
}