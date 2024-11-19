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
      ll a;cin>>a;
      ii ans;
      ll maxi=INT_MAX;
      for(ll i=1;i*i<=a;i++)
      {
        if(a%i==0)
        {
            if(i*i==a)continue;
            else
            {
                if(maxi>a/i)
                {
                    ans.first=i;
                    ans.second=a/i;
                }

            }

        }
        cout<<ans.first<<" "<<ans.second<<endl;
      }

}
