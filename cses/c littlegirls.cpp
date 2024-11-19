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
      ll a[n+1];
      ll s[n+2] {0};
      for(ll i=0;i<n;i++)cin>>a[i];
      while(q--)
      {
        ll l,r;cin>>l>>r;
        r++;
        s[l]+=1;
        s[r]-=1;
      }
      for(ll i=1;i<=n;i++)
      {
        s[i]+=s[i-1];
      }
      sort(a,a+n);
      sort(s,s+n+1);
      ll answer=0;
      for(ll i=0;i<n;i++)
      {
          answer+=1ll*a[i]*s[i+1];
        
      }
    cout<<answer<<endl;

}
