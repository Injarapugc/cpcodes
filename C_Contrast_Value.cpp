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
int anns;
int g(int i, vi &a,int s,int prev)
{
    int n=a.size();
    if(i==n)
    {
        if(s==anns) return 0;
        return 1e9;
    }
    int p,np;
    p=np=0;
    if(prev==-1)
    {
        p=1+g(i+1,a,s+(abs(a[i]-a[i+1])),i);
        np=np+g(i+1,a,s,i);
    }
    else
    {
         p=1+g(i+1,a,s+(abs(a[i]-a[p])),i);
      np=np+g(i+1,a,s,i);

    }
   
    return min(p,np);
}
void solve()
{
    ll n;
    cin>>n;
    vi a(n);
    fi(i,n,0)cin>>a[i];
     n=unique(a.begin(),a.end())-a.begin();
    ll ans=n;
   
    for(int i=0;i+2<n;i++)
    {
        if(a[i]<a[i+1]&&a[i+1]<a[i+2])ans--;
        if(a[i]>a[i+1]&&a[i+1]>a[i+2]) ans--;
    }
    cout<<ans<<endl;


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
