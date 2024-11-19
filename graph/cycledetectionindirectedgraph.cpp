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
vi d(10000,0);
void dfs(int i,vector<int> a[])
{
    d[i]=1;
    for(auto x:a[i])
    {
        if(d[x]==1)
        {
            cout<<"it consit of back edge\n";
        }
        else
        {
            dfs(x,a);
        }

    }
    d[i]=0;

}
void solve()
{

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
