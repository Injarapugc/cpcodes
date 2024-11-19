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
    vi b(n+2,0);
    fi(i,n,0)
    {
        if(i==0)b[a[i]]=1;
        else
        {
            if(b[a[i]+1]==0&&b[a[i]-1]==0)
            {
                cout<<"NO\n";
                return;

            }
            else b[a[i]]=1;
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
