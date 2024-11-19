#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int l,b;cin>>l>>b;
      ll s=0;
      ll n;cin>>n;
      vii a(n);
      for(auto x:a)
      {
        cin>>x.first;
        cin>>x.second;
      }
      ll a2=l*b;
      sort(a.begin(),a.end(),greater<ll>());
      for(ll i=0;i<n;i++)
      {
        if(a[i].first<l||a[i].second<b)continue;
        else
        {
            ll a1=a[i].first*a[i].second;
            s+=a1/a2;
        }
      }
      cout<<s<<endl;

}
