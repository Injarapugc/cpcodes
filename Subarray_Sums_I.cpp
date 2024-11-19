#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define read(arr,n) ll arr[n]; for(ll i=0;i<n;i++)cin>>arr[i];
 
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n,k;
      cin>>n>>k;
      vi a(n);
      for(auto &x:a)cin>>x;
      ll s=0;
      ll c=0;
      map<ll,int> ans;
      ans[0]++;
      for(ll i=0;i<n;i++)
      {
        s+=a[i];
        c+=ans[s-k];
        ans[s]++;
      }
      cout<<c<<endl;



}