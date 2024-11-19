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
      ll t;cin>>t;
    while(t--)
    {  
      ll n;cin>>n;
        vi a(n+1);
      bool one=false;
      for(ll i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]==1)one=true;
      }
      sort(a.begin(),a.end());
      bool flag=false;
      for(ll i=0;i<n;i++)
      {
        if(one)
        {
            flag=true;
            break;
        }
        else
        {
            if(a[i+1]-a[i]==1)
            {
                flag=true;
                break;
            }
          
        }
        
      }
      if(flag)cout<<"NO\n";
      else cout<<"YES\n";
    }
}
