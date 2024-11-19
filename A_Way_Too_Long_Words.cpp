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

    string f;
    cin>>f;
    if(f.length()<=10)
    {
        cout<<f<<endl;
        return;
    }
    cout<<f[0];
    cout<<f.length()-2;
    cout<<f.back();
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
