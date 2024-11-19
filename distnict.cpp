#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;
set<string> ans;
void solve(int i,string s,string f,vector<int> &v)
{
    if(f.length()==s.length())
    {
         ans.insert(f);
         return;

    }
    ans.insert(f);
    for(int j=0;j<s.length();j++)
    {
        if(!v[j])
        {
            v[j]=1;
            solve(i+1,s,f+s[j],v);
            v[j]=0;
        }
    }


}
  
int main()
{
    string s;
    cin>>s;
    vector<int> v(s.length(),0);
    solve(0,s,"",v);
    cout<<ans.size()-1;
}