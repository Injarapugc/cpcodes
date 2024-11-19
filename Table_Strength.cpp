#include<bits/stdc++.h>
using namespace std;
bool riz(string g)
{
    string f=g;
    reverse(f.begin(),f.end());
    return f==g;
}
int main()
{
    
    string f;
    cin>>f;
    getline(cin,f);
    vector<string> ans;
    string g="";
    for(int i=0;i<f.length();i++)
    {
        if(isspace(f[i]))
        {
            ans.push_back(g);
            g="";
        }
        else g+=f[i];
    }
    for(auto x:ans)
    {
          cout<<x;
            
        
    }
}