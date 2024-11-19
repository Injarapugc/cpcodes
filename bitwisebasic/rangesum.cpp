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
      ll n,q;cin>>n>>q;
      ll a[n];
      read(a,n);
      ll sum[n+1] {0};
      for(ll i=1;i<=n;i++)
      {
        sum[i]+=sum[i-1]+a[i-1];
      }
      while(q--)
      {
        ll l,r;
        l--;
        cout<<sum[r]-sum[l]<<endl;
      }

}
