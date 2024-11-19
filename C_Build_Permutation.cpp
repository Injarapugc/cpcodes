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

void nig(int n)
{
    if(n<0) return;
    int k=ceil(sqrt(n));
    k*=k;
    nig(k-n-1);
    for(int i=n;i>=k-n;i--)cout<<i<<" ";
}
void solve()
{
    int n;
    cin>>n;
    nig(n-1);
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
