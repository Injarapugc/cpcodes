#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
#define v void
using namespace std;
const int ni=1000000+5;
int a[ni],t[ni*4];
v build(int i,int j,int n)
{
    if(i==j)t[n]=0;
    else
    {
        int m=(i+j)/2;
        build(i,m,n*2);
        build(m+1,j,n*2+1);
        t[n]=t[n*2]+t[n*2+1];
    }
}
v update(int i,int j,int p,int n)
{
    if(i>p or j<p) return;
    if(i==j)
    {
        t[n]++;
        return;
    }
    int m=(i+j)/2;
    update(i,m,p,n*2);
    update(m+1,j,p,n*2+1);
    t[n]=t[n*2]+t[n*2+1];
}
int sum(int i,int j,int a,int b,int n)
{
    if(i>b or j<a) return 0;
    if(i>=a and j<=b) return t[n];
    int m=(i+j)/2;
    return sum(i,m,a,min(j,m),n*2)+sum(m+1,j,max(a,m+1),b,n*2+1);

}


void solve()
{
    int n;
    cin>>n;
     vector<ii> aa;
     fi(i,n+1,1)
     {
        cin>>a[i];
        aa.push_back({a[i],i});
     }
     aa.push_back({0,0});
     sort(aa.begin(),aa.end());
     fi(i,n+1,1)
     {
        a[aa[i].second]=i;
     }
     vi ans(n+1);
     fi(i,n+1,1)
     {
        int c=sum(1,n,1,a[i]-1,1);
        update(1,n,a[i],1);
        ans[i]=c;
     }
     fi(i,n+1,1)
     {
        cout<<ans[i]<<" "<<a[i]<<endl;
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
