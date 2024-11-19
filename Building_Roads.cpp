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
vi f(1e6,0);
void dfs(int i,vector<int> a[])
{
    f[i]=1;
    for(auto x:a[i])
    {
        if(!f[x])dfs(x,a);

    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a[n+1];
    f.clear();
    f.resize(n+1);
    fi(i,n+1,1)f[i]=0;
    fi(i,m,0)
    {
        int x1,x2;
        cin>>x1>>x2;
        a[x1].push_back(x2);
        a[x2].push_back(x1);
    }
    vector<int> ans;
    for(int i=1;i<=n;i++)
    {
        if(!f[i])
        {
            ans.push_back(i);
            dfs(i,a);

        }
    }
    n=ans.size();
    cout<<n-1<<endl;
    if(n>1)
    ans.resize(ans.size());
    for(int i=1;i<n;i++)
    {
        cout<<ans[i-1]<<" "<<ans[i]<<endl;
    }

}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
