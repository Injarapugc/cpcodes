#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
signed main()
{
    int n,m,k;cin>>n>>m>>k;
    vi a(n+1);
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
    }
    vector<int> v;
    vector<ii> lr;
    for(int i=1;i<=m;i++)
    {
        cin>>lr[i].first>>lr[i].second;
        cin>>v[i];
    }
    vi dif(n+1,0);
    while(k--)
    {
        int x,y;cin>>x>>y;
        y++;
        dif[x]++;
        dif[y]--;
    }
    for(int i=1;i<=n;i++)
    {
        dif[i]+=dif[i-1];
    }
    vi ans(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int l=lr[i].first,r=lr[i].second;
        int z=dif[i]*v[i];
        r++;
        ans[l]+=z;
        ans[r]-=z;
    }
    for(int i=1;i<=n;i++)
    {
        ans[i]+=ans[i-1];
        ans[i]+=a[i];
    }
    for(int i=1;i<=n;i++)cin>>ans[i];





}
