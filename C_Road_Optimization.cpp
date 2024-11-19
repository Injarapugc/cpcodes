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
int a[501];
int b[501];
int dp[501][501];
int n,k,s;
int f(int i,int j)
{
    if(i==1)
    {
      if(j==0) return 0;
      else return 1e9;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=INT_MAX;
    for(int ki=i-1;ki>=1;ki--)
    {
      int r=i-ki-1;
      if(j-r>=0)
      ans=min(ans,f(ki,j-r))+((a[i]-a[ki])*b[ki]);
    }
    return dp[i][j]=ans;

}
int rizz(int l,int k)
{
  if(l>=s)
  {
    return 0;
     
  }
 
  if(dp[l][k]!=-1) return dp[l][k];
  int np=1e9;
  for(int i=0;i<=k;i++)
  {
    if(i+l>s) break;
    np=min(np,rizz(i+l+1,k-i)+((a[i+l+1]-a[l])*(b[l])));

  }
  return dp[l][k]=np;

}
int ne(int p,int r)
{
  if(p>=s)
  {
    return 0;
    return 1e9;
  }
  if(dp[p][r]!=-1) return dp[p][r];
  int ans=1e9;
  for(int j=0;j<=r;j++)
  {
    if(j+p>=s) break;
    int jj=(a[j+p+1]-a[p])*b[p];
    ans=min(ans,jj+ne(j+p+1,r-j));
  }
  return dp[p][r]=ans;
}
void solve()
{
  memset(dp,-1,sizeof(dp));
  cin>>s;
  cin>>n;
  cin>>k;
  for(int i=0;i<s;i++)cin>>a[i];
  for(int i=0;i<s;i++)cin>>b[i];
  a[s]=n;
   int ans=1e9;
   ans=ne(0,k);
   cout<<ans;


  


    
}
int main()
{
 
    solve();
  
}