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

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n,m;cin>>n>>m;
      multiset<ll> a;
      for(ll i=0;i<n;i++)
      {
        ll price;
        cin>>price;
        a.insert(price);
      }
      for(ll i=0;i<m;i++)
      {
        ll cum;cin>>cum;
        auto it=a.upper_bound(cum);
        if(it==a.begin())
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            cout<<*(--it)<<endl;
            a.erase(it);
        }

      }

}