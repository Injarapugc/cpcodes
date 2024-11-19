#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve()
{
    ll n,s;
    vi a(n);
    ll sum=0;
    ll res=0;
    ll j=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>s)
        {
            sum-=a[j];
            j++;
        }
        res+=i-j+1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      solve();

}
