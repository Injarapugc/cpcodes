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


void solve()
{
    int n;
    cin>>n;
    string f;
    cin>>f;
    set<char> aa(f.begin(),f.end());
    string g="";
    for(auto x:aa)g+=x;
    int i=0,j=g.length()-1;
    vector<char> a(26,'A');
    while(i<=j)
    {
        int x=g[i]-97;
        int y=g[j]-97;
       
        a[x]=g[j--];
        a[y]=g[i++];
    }
    string ans="";
    for(int i=0;i<n;i++)
    {
        ans+=a[f[i]-97];
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
