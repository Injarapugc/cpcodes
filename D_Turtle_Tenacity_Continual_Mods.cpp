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
    ll o=0;
    fi(i,n,0)
    {
        cin>>a[i];
        
    }
    sort(a.begin(),a.end());
    if(a[0]!=a[1])
    {
        cout<<"YES\n";
        return;
    }
    else
    {
         int p=0;
         fi(i,n,1)
         {
            if(a[i]%a[0]!=0)p=1;
         }
         if(p)
         {
            cout<<"YES\n";
         }
         else cout<<"NO\n";
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
