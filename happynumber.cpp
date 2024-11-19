#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
bool solve(int n)
{
    if(floor(log10(n)+1)==1)
    {
        return (n==1)||(n==7);
    }
    int x=0;
    while (n>0)
    {
        x+=n%10*n%10;
        n=n/10;
    }
    
    solve(x);


}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    cout<<solve(n);
  }
}