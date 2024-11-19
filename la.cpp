#include<bits/stdc++.h>
using namespace std;
set<string> gg;
void ll(vector<string> &a,int i,string s,vector<int> &f,int ff)
{
    int n=a.size();
   
    if(ff==n)
    {
        if(s.length()>0)gg.insert(s);
        return;
    }
     gg.insert(s);
    for(int j=0;j<n;j++)
    {
        if(f[j]==0)
        {
            ll(a,j,s+a[j],f,ff+1);
            f[j]=1;
        }
        f[j]=0;
    }
}
int main()
{
    string s;
    string aa;
    getline(cin,s);
    getline(cin,aa);
    
    stringstream ss(aa);
    string g="";
    string f;
    vector<string> a;
    while(getline(ss,f,' '))
    {
        a.push_back(f);
    }
    string ans="";
    int n=s.length();
    vector<int> fi(n,0);
    ll(a,0,"",fi,0);
   
 
    for(int i=0;i<s.length();i++)
    {
        f=s.substr(i,n-i);
        int k=0;
        while(f.length()>1)
        {
            if(find(gg.begin(),gg.end(),f)==gg.end())
            {
                f.pop_back();
            }
            else
            {
             
                cout<<"<i>"<<f<<"</i>";
                k=1;
                i+=f.length();
                i--;
                
                break;
            }
        }
        if(k==0)cout<<f;

    }

}