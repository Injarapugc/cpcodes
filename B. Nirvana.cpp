#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve(ll n)
{
    ll d=floor(log10(n)+1);
    ll s=1;
    ll a;
    while(d--)
    {
        a=n%10;
        s*=a;
        n/=10;
    }
    cout<<s<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      ll n;cin>>n;
      if(n%10==0)n--;
      solve(n);
}
