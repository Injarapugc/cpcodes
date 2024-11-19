#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
const int N=1e9+10;
ll sumi(ll a,ll b)
{
    return((a%N+b%N)%N);
}
ll product(ll a,ll b)
{
    return((a%N*b%N)%N);
}

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n;cin>>n;
      ll mini=1e9+10;
      ll num=1;
      while(n--)
      {
        ll a,b;
        num*=a;
        mini=min(mini,b);
      }
      num*=mini;
      ll sum=0;
      ll pro=1;
      for(ll i=1;i*i<=num;i++)
      {
        if(num%i==0)
        {
            ll a=i;
            ll b=n/i;
            sum+=sumi(a,b);
            pro+=product(a,b);

        }
      }
      cout<<num<<" "<<sum<<" "<<pro<<"\n";

}
