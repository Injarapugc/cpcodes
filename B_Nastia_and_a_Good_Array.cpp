#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
ll n=1e8+10;
vector<bool> a(n,true);
void seive()
{
    a[0]=a[1]=false;
    for(ll i=2;i*i<n;i++)
    {
        if(a[i])
        {
            for(ll j=2*i;j<=n;j+=i)
            {
                a[j]=false;
            }
        }
    }
}
void solve()
{
    ll n1;
    cin>>n1;
    vi a(n1);
    seive();
    for(auto &x:a)cin>>x;
    ll x=0;
    
  


    
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