#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> riz;
    string f;
    getline(cin,f);
    string g="";
    for(int i=0;i<f.length();i++)
    {
        if(isspace(f[i]))
        {
            riz.push_back(g);
            g="";
        }
        else
        g+=f[i];
    }
    riz.push_back(g);
    map<string,int> ri;
    set<string> fff;
    for(int i=0;i<riz.size();i++)
    {
        g=riz[i];
        string aa="";
        for(int j=0;j<g.length();j++)
        {
            if(riz[i][j]=='.')continue;
            else if(riz[i][j]=='+')
            {
                while(riz[i][j]!='@')j++;
                for(int kk=j;kk<riz[i].length();kk++)aa+=riz[i][kk];
                break;
            }
            else if(riz[i][j]=='@')
            {
                 while(riz[i][j]!='@')j++;
                for(int kk=j;kk<riz[i].length();kk++)aa+=riz[i][kk];
                break;

            }
            else aa+=riz[i][j];
        }
        fff.insert(aa);
        
    }
    int ans=0;
    riz.clear();
    for(auto x:fff)
    {
        riz.push_back(x);
    }
    for(auto x:riz)
    {
        if(x=="")continue;
        ans++;
        cout<<ans<<" ";
        cout<<x<<endl;
    }
    
    
}