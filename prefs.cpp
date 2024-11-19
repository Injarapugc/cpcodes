#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve(string &s,int i,string ans,vector<string> &a,int &sum)
{
    if(i==s.length())
    {
        if(ans.length()>1)
        {     sum+=1;
             a.push_back(ans);
        }
        return;
    }
    if(ans.length()==0)
    {
         solve(s,i+1,ans+=s[i],a,sum);

    }
    else if ((s[i]=='A'&&ans[i-1]=='B')||((s[i]=='B'&&ans[i-1]=='A')))
    {
         solve(s,i+1,ans+=s[i],a,sum);

    }
    ans.pop_back();
        solve(s,i+1,ans,a,sum);
}
int main()
{
    vector<string> l;
    string li;
    cin>>li;
    string g;
    int s=0;
    solve(li,0,g,l,s);
    cout<<s<<endl;
    for(auto x:l)cout<<x<<" ";



}