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
    cin>>n>>m;
    vector<string> a(n),b(n);
    fi(i,n,0)cin>>a[i];
    fi(i,n,0)cin>>b[i];
    fi(i,n,0)
    {
        ll x1=0,x2=0;
        fi(j,m,0)
        {
            x1+=a[i][j]-'0';
            x2+=b[i][j]-'0';

        }
        x1%=3;
        x2%=3;
        if(x1!=x2)
        {
            
            cout<<"NO\n";
            return;
        }
    }
    fi(i,m,0)
    {
        ll x1=0,x2=0;
        fi(j,n,0)
        {
            x1+=a[j][i]-'0';
            x2+=b[j][i]-'0';

        }
        x1%=3;
        x2%=3;
        if(x1!=x2)
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
