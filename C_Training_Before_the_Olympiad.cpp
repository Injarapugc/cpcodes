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
    ll o=0,s=0;
    fi(i,n,0)
    {
        ll x;
        cin>>x;
        s+=x;
        if(x&1)o++;
        if(i==0)cout<<x<<" ";
        else if(o%3==1)
        {
            cout<<s-(o)/3-1<<" ";
        }
        else
        {
            cout<<s-(o)/3<<" ";
        }
    }
    cout<<endl;
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
