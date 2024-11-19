#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define read(arr,n) int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n;
      ll a[n+1];
      a[0]=0;
      ll ans=0;
      for(ll i=1;i<=n;i++)
      {
        ll a1;cin>>a1;
        if(a1%n==0)ans++;
        a[i]=a1;

      }
      for(ll i=1;i<=n;i++)
      {
        a[i]=(a[i]+a[i-1])%n;
      }
      ll ans=0;
      ll s[n];
      fill(s,s+n,-1);
      for(ll i=1;i<=n;i++)
      {
        if(s[i]==-1)s[i]=i;
        else
        ans+=1;
      }
      

      

}
