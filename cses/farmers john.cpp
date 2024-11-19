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
      ll one[n+1] {0};
      ll tow[n+1] {0};
      ll three[n+1] {0};
      for(ll i=0;i<n;i++)
      {
        ll a;cin>>a;
        if(a==1)one[i+1]+=1;
        else if(a==2)tow[i+1]+=1;
        else three[i+1]+=1;
      }
       for(ll i=1;i<=n;i++)
      {
        one[i]+=one[i-1];
        tow[i]+=tow[i-1];
        three[i]+=three[i-1];
      }
      while(q--)
      {
        ll l,r;
        l--;
        cout<<one[r]-one[l]<<" "<<tow[r]-tow[l]<<" "<<three[r]-tow[l]<<endl;
      }


}
