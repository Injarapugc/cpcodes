#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve(int i,int n,vi &a,vector<vector<ll>> &ans,vi &r)
{
    if(i==n)
    {
        ans.push_back(a);
        return;
    }
    a.push_back(r[i]);
    solve(i+1,n,a,ans,r);
    a.pop_back();
    solve(i+1,n,a,ans,r);
    
}
int main()
{
    vector<vector<ll>> ans;
    vi r;
    vi a{1,2,3,4};
    solve(0,4,r,ans,a);
    for(auto x:ans)
    {
        for(auto l:x)cout<<l<<" ";
        cout<<endl;
    }

}