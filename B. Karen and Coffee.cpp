#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
int min=INT_MAX;
signed main()
{
    int n,k,q;cin>>n>>k>>q;
    vi a(2000,0);
    for(int i=1;i<=n;i++)
    {
        int x,y;cin>>x>>y;
        y++;
        a[x]++;
        a[y]--;
    }
    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
    }
    vii que(k+2);
    for(int i=1;i<=n;i++)
    {
        cin>>que[i].first>>que[i].second;
    }







}
