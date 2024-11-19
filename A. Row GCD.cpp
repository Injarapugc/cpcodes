#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define read(arr,n) int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];
ll M=1e9+10;
int as(int a,int b)
{
  return(a%M+b%M)%M;
}
int mu(int a,int b)
{
    return((a%M)*(b%M))%M;
}
int su(int a,int b)
{
    return((a%M-b%M)%M+M)%M;
}
int modInverse(int A, int M)
{
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n,m;cin>>n>>m;
      ll a[n+2];
      for(ll i=1;i<=n;i++)cin>>a[i];
      //finding gcd of n numbers
      sort(a+1,a+n+1);
      ll ans=0;
      for(ll i=2;i<=n;i++)
      {
        ans=__gcd(ans,a[i]-a[1]);
      }
      for(ll i=1;i<=m;i++)
      {
        ll b;cin>>b;
        ll val=__gcd(a[1]+b,ans);
        cout<<val<<" ";
      }
      

}
