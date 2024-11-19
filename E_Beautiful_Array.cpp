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
    fi(i,n,0)cin>>a[i];
    bool j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-i+1])
        {
            j=1;
            break;
        }
    }
    if(j)
    {
        cout<<0<<endl;
        return;
    }
    sort(a.begin(),a.end());
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
        

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
