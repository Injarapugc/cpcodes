#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve(vi &n,int i,int &ans,map<int,int> &a)
{
    if(i==n.size()) return;
    a[n[i]]++;
    solve(n,i+1,ans,a);
    if(a[n[i]]&1)
    {
        ans=n[i];
    }
    return;
    
}
int main()
{
    int n;
    cin>>n;
    vi a(n);
    for(auto &x:a)cin>>x;
    map<int,int> ans;
    int l;
    solve(a,0,l,ans);
    cout<<l;
}