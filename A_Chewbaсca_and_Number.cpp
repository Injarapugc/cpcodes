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
     ll n;
     cin>>n;
     string f=to_string(n);
     string ans="";
     for(int i=0;i<f.length();i++)
     {
          string g="";
          g+=f[i];
          int a1=stoi(g);
          if(i==0&&9-a1==0)
          {
            ans+=to_string(a1);
            continue;
          }
          int a2=min(a1,9-a1);
          ans+=to_string(a2);
     }
     cout<<ans<<endl;
}
  
int main()
{
  ll t;
  t=1;
  while(t--)
  {
    solve();
  }
}
