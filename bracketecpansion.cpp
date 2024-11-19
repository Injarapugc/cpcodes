#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void ll(string &s,vector<int> &a,int i,int sum,int s1,int &b)
{
    int n=s.length();
    if(i==n)
    {
        if(s1==sum)
        {
            ans.push_back(a);
            b=1;
            return;
        }
        return;
    }
    for(int j=i;j<n;j++)
    {
        string f=s.substr(i,j-i+1);
        int gg=stoi(f);
        a.push_back(gg);
        ll(s,a,j+1,sum,s1+gg,b);
        a.pop_back();
    }

}
/*** 
void gg(string& g,string s,int i)
{
    int n=g.length();
    if(i==n)
    {
        ans.push_back(s);
        return;
    }
    if(g[i]=='{')
    {
        int j=i;
        while(g[j]!='}')
        {
            j++;
        }
        j++;

        for(int k=i+1;k<j-1;k++)
        {
           
            gg(g,s+g[k],j);
        }
    }
    else
    {
        gg(g,s+g[i],i+1);
    }
}
***/
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int b=0;
        string g=to_string(i*i);
        ll(g,a,0,i,0,b);
        if(b==1)ans+=i*i;
    }
    cout<<ans;
}