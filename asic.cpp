#include<bits/stdc++.h>
using namespace std;
void riz(vector<int> &a,vector<vector<int>> &r,vector<bool> &c,vector<int> &s)
{
  if(a.size()==s.size())
  {
    r.push_back(a);
    return;
  }
  for(int i=0;i<s.size();i++)
  {
    if(!c[i])
    {
      a.push_back(s[i]);
      c[i]=1;
      riz(a,r,c,s);
      c[i]=0;
      a.pop_back();
    }
  }
}
int  main()
{
  vector<vector<int>> ans;
  vector<int> a{1,2,3};
  vector<bool> c(3,0);
  vector<int> s;
  riz(s,ans,c,a);
  for(auto x:ans)
  {
    for(int i:x)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
}