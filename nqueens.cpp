#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
bool check(int r,int c,vector<string> &b,int n)
{
    int r1=r;
    int c1=c;
    while(r1>=0&&c1>=0)
    {
        if(b[r1][c1]=='Q') return false;
        r1--;
        c1--;
    }
    r1=r;
    c1=c;
    while (c1>=0)
    {
        if(b[r1][c1]=='Q') return false;
        c1--;
    }
    r1=r;
    c1=c;
    while (r1<n&&c1>=0)
    {
         if(b[r1][c1]=='Q') return false;
         r1++;
         c1--;
    }
    return true;
}
void solve(int c,vector<string> &b,int n,vector<vector<string>> &ans)
{
    if(c==n)
    {
        ans.push_back(b);
        return;
    }
    for(int r=0;r<n;r++)
    {
        if(check(r,c,b,n))
        {
            b[r][c]='Q';
            solve(c+1,b,n,ans);
            b[r][c]='.';
        }
    }
  
    
}
int main()
{
    int n;
    cin>>n;
    string s(n,'.');
    vector<string> b(n,s);
    vector<vector<string>> ans;
    solve(0,b,n,ans);
    for(auto x:ans)
    for(auto i:x) cout<<i<<" ";
    cout<<endl;
}