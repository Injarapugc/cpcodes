#include<bits/stdc++.h>
using namespace std;

void rizz(int i,int n,vector<int> &t,vector<int> &a,vector<vector<int>> &ans)
{
    if(n==1)
    {
        ans.push_back(t);
        return; 
    }
    if(n<1) return ;
    if(i==a.size()) return;
    if(n%a[i]==0)
    {
      t.push_back(a[i]);
      rizz(i,n/a[i],t,a,ans);
      t.pop_back();
    }
    rizz(i+1,n,t,a,ans);

}
int main()
{
    int n;
    cin>>n;
    vector<int> a,t;
    vector<vector<int>> ans;
    for(int i=2;i*i<=n;i++)
    {
        if(i!=n/i)a.push_back(n/i);
        a.push_back(i);
    }
    sort(a.begin(),a.end());
    rizz(0,n,t,a,ans);
    for(auto x:ans)
    {
        for(auto y:x)cout<<y<<" ";
        cout<<endl;
    }
}