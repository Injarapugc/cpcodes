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
    vi a(n);
     fi(i,n,0) cin>>a[i];
    ll ans=0;
    fi(i,n-1,1)
    {
        if(a[i]==0&&a[i-1]==0&&a[i+1]==0)
        {
            ans++;

        }
    }
    if(a[0]==0&&a[1]==0) ans++;
    if(a[n-1]==0&&a[n-2]==0) ans++;
    if(ans>=k) cout<<"true\n";
    else cout<<"false\n";

  


    
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