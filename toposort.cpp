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
vi r(1000,0);
void dfs(stack<int> &a,int i,vector<int> b[])
{
    r[i]=1;
    for(auto x:b[i])
    {
        dfs(a,x,b);
    }
    a.push(i);


}
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n,0);
    vector<int> ad[n];
    for(int i=0;i<n;i++)
    {
        for(auto x:ad[i])
        {
            a[x]++;
        }
    }
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)q.push(i);
    }
    vector<int> topo;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        topo.push_back(x);
        for(auto j:ad[x])
        {
            a[j]--;
            if(a[j]==0)q.push(j);

        }
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