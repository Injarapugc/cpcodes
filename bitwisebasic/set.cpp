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
    //checking if i the digit is a bit or not
    n=n&(1<<n);
    //flipping  i bit
    n=n^(1<<n);
    // clear i bit
    n=n&~(1<<n);
    // count no bits
    int c=0;
    while(n)
    {
        n=n&(n-1);
        c++;
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