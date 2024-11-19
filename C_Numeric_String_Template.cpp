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
     vi a(n);
     fi(i,n,0)cin>>a[i];
     ll m;cin>>m;
     vector<string> b(m);
     fi(i,m,0)cin>>b[i];
     fi(i,m,0)
     {
        map<char,ll> g;
        map<ll,char> f;
        ll flag=0;
        if(b[i].length()!=n)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {

            fi(j,n,0)
            {
                if(!g.count(b[i][j]))g[b[i][j]]=a[j];
                if(!f.count(a[j]))f[a[j]]=b[i][j];
                if(g[b[i][j]]!=a[j]||f[a[j]]!=b[i][j])
                {
                    flag=1;
                    break;
                }

            }
            if(flag==0)cout<<"YES\n";
            else cout<<"NO\n";
        }
     }
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
