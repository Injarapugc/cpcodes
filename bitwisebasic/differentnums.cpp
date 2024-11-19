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
      int t;cin>>t;
      bitset<10001> a;
      int ans=0;
      while(t--)
      {
        int x;cin>>x;
        // here when we intiliaze a bitset it gets all its 0 by comparing it with then we do it
        if(!a[x])
        {
            a[x]=true;
            ans++;

        }

      }
      cout<<ans;

}
