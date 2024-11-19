#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vi a(n);
    for(auto &x:a)cin>>x;
    map<ll,ll> r;
    for(auto x:a)
    {
        r[x]++;
    }
    int l;
    int ans=0;
    int m=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ans=0;
        if(r[a[i]]==n)
        {
            cout<<0<<endl;
            return;
        }
        if(r[a[i]]==1)
        {
            if(i==0||i==n-1) ans=1;
            else ans=2;
        }
       else
       { 
        int l=i;
        if(l>0) ans++;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                if(j-l>1)
                ans++;
                l=j;
            }

        }
        if(l!=n-1)
        {
            ans++;
        }
        r[a[l]]=1;
        m=min(ans,m);
    }
    }
    if(m==INT_MAX) cout<<1<<endl;
    else cout<<m<<endl;
    
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