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
      ll n,k;cin>>n>>k;
      set<ll> a;
      while(k--)
      {
        ll a1,a2;
        cin>>a1>>a2;
        a.insert(a1);
        a.insert(a2);
      }
      int z=a.size();
      int ans=0;
     for(auto i:a)
     {
        ll aa=i;
        if(n%aa==0)ans++;
        else
        {
            int zz=n%i;
        
        }
     }
      

      
}
