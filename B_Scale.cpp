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
    vector<string> a(n);
    fi(i,n,0)cin>>a[i];
    
    for(int i=0;i<n;i+=k)
    {
        for(int j=0;j<n;j+=k)
        {
            cout<<a[i][j];
        }
        cout<<endl;
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
