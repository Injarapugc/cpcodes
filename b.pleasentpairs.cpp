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
        vi index(n+1,-1);
        for(ll i=1;i<=n;i++)
        {
            int a;cin>>a;
            index[a]=i;
        }
        ll ans=0;
        for(ll i=3;i*i<=n;i++)
        {
            for(ll j=1;j*j<=i;j++)
            {
                if((index[i]!=-1)&&j*j!=i&&index[i/j]!=-1&&i%j==0&&index[j]+index[i/j]==i)
                ans++;
            }
        }
        cout<<ans<<endl;
      
      }

}
