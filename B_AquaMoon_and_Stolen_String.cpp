#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n,m;
    cin>>n>>m;
    vi ans(m,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char r;
            cin>>r;
            ans[j]+=r;
        }
    }
     for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            char r;
            cin>>r;
            ans[j]-=r;
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<char(ans[i]);
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