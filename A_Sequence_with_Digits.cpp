#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
ll riz(ll n)
{
    int mi,mm;
    mi=INT_MAX;
    mm=INT_MIN;
    while (n>0)
    {
        if(mi>n%10)mi=n%10;
        if(mm<n%10)mm=n%10;
        if(n>=10) n=n/10;
        else break;
    }
    return 1LL*(mi*mm);
    
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    while (k>1)
    {
        if(n==0) break;
        ll j=riz(n);
        if(j==0) break;
        n=n+j;
        k--;
    }
    cout<<n<<endl;
    
    


  


    
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