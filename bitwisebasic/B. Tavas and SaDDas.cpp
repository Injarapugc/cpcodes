#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve(string s)
{
    ll len=s.length();
    ll ans=0;
    for(ll i=0;i<len;i++)
    {
        if(s[i]=='7')ans+=(1<<(i+1));
        else ans+=(1<<(i));
    }
    cout<<(ans+1)<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      string s;
      cin>>s;
      solve(s);

}
