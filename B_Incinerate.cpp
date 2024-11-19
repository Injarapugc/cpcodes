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
    ll n,k;
    cin>>n>>k;
    vi a(n),b(n);
    fi(i,n,0)cin>>a[i];
    fi(i,n,0)cin>>b[i];
    ll dmg=0;
    vi ord(n);
    iota(ord.begin(),ord.end(),0);
    sort(ord.begin(),ord.end(),[&](auto x,auto u){return b[x]<b[u];});
    for(int i:ord)
    {
        if(a[i]<=dmg) continue;
        if(i!=ord[0])k-=b[i];
        if(k>0)
        {
            dmg+=k;
             
            while(a[i]>dmg)
            {
                k-=b[i];
                if(k<0)
                {
                    break;
                }
                dmg+=k;
            }
        }
        if(a[i]>dmg) 
        {
            cout<<"NO\n";
            return;
        }
       
       
       
    }
    cout<<"YES\n";
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
