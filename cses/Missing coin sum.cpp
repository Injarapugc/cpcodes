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
      ll n;cin>>n;
      ll a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      sort(a,a+n);
      ll ans=1;
      for(int i=0;i<n;i++)
      {
        if(ans>=a[i])ans+=a[i];
        else break;
      }
      cout<<ans;


}
