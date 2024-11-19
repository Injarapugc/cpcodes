#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
vector<int> a[100005];
bool v[100005];
int dp[100005];
void dfs(int i)
{
    v[i]=1;
    dp[i]=0;
    for(int x:a[i])
    {
        if(!v[x])
        {
            dfs(x);
        }
        dp[i]=max(dp[i],dp[x]+1);
    }


}
void solve()
{
    int n,g;
    cin>>n>>g;
    for(int i=0;i<g;i++)
    {
        int x;
        cin>>x;
        int y;
        cin>>y;
        a[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
    {
        dfs(i);
    }
    cout<<*max_element(dp,dp+n+1);

  


    
}
int main()
{
    solve();
}