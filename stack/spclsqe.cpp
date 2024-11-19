#include<bits/stdc++.h>
using namespace std;
void riz(int n,int i,vector<int> &a)
{
    if(i==0)
    {
        a.push_back(0);
    }
    if(i>=n) return;
    if(i>0&&i<n)
    {
        if(a[i-1]-i>0&&find(a.begin(),a.end(),a[i])==a.end()) a.push_back(a[i-1]-i);
        else a.push_back(a[i-1]+i);
    }
    riz(n,i+1,a);
}
int main()
{
    vector<int> a;
    int n;
    cin>>n;
    riz(n,0,a);
    for(auto x:a)cout<<x<<" ";
    cout<<endl;
    
}