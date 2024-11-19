#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
bool prime(ll a)
{
    for(ll i=2;i*i<=a;i++)
       if(a%i==0)return false;
    return true;   
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      int tc;cin>>tc;
      while(tc--)
      {
          
        ll ans;
        ll a,b;cin>>a>>b;
        if(a<=b)
        ans=1;
        else if(prime(a))
        {
            ans=a;
        }
        else 
        {
            ans=a;
            for(ll i=1;i*i<=a;i++)
            {
                if(a%i==0)
                {
                   if(i<=b)ans=min(ans,a/i);
                   if(a/i<=b)ans=min(ans,i);

                }
            }
        }
         cout<<ans<<"\n";
        
      }
}
