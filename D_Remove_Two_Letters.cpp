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
vector<char> ij(int i,vector<char> &j)
{
    vector<char> r;
    int f=0;
    for(int k=0;k<j.size();k++)
    {
        if(k==i||k==i+1)continue;
        else
        {
            r.push_back(j[k]);
        }

    }
    return r;
}
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int ans=n-1;
    for(int i=1;i<n-1;i++)
    {
        if(s[i-1]==s[i+1])ans--;
    }
    cout<<ans<<endl;
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}