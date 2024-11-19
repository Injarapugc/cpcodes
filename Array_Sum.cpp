#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
  ll n,k;
  cin>>n>>k;
  ll mi=3*n/2;
  ll ma=100000*n;
  ma-=n/2;
  if(k<mi||k>ma)
  {
    cout<<-1<<endl;
    return;
  }
  ll dif=k-mi;
  if(dif&1)
  {
    cout<<-1<<endl;
    return;
  }
  ll add=dif/n;
  ll div=dif%n;
  vi a(n);
  for(int i=0;i<n;i++)
  {
    if(i%2==0) a[i]=1;
    else a[i]=2;
  }
   for(int i=0;i<n;i++)
  {
    a[i]+=add;
  }
   for(int i=0;i<div;i++)
  {
    a[i]++;
  }
  for(auto x:a)
  {
    cout<<x<<" ";
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