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
      for(ll i=0;i<n;i++)cin>>a[i];
      map<ll,ll> s;
      for(ll i=0;i<n;i++)
      {
        s[a[i]]++;
      }
      ll m=s.size();
      m=m/2;

      ll sum=0;
      ll b1;
      ll j=0;
     
      for(auto x=s.begin();x!=(s.end())&&j<m;x++)
      {
         ll b2=x->first;
         j++;

      }
      ll i=0;
      for(auto x:s)
      {
        ll sum1=abs(x.first-b1);
        sum+=x.second*sum1;
      }
      cout<<sum<<endl;


}
