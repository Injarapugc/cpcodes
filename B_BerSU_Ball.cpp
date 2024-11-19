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
    ll n,m;
    cin>>n;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    cin>>m;
    vi b(m);
    fi(i,m,0)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=0;
    ll j=0;
    ll f=0;
    fi(i,n,0)
    {
        f=0;
        fi(j,m,0)
        {
            if(abs(a[i]-b[j])<=1)
            {
                ans++;
                b[j]=1e9;
                break;
            }
        }
        
    }
    cout<<ans<<endl;
}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
