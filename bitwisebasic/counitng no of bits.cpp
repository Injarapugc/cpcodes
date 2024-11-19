#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
//instead of using this function we can use built in function called _builtin_popcount(n)
int count(int n)
{
    int ans=0;
    while(n)
    {
        ans+=(n&1);
       n= (n>>1);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int n;cin>>n;
      int m;cin>>m;
      int ans=0;
      for(int i=n;i<=m;i++)
      {
        if(i&1==0)
        {
            ans+=2*(count(i))+1;
            i++;
            continue;
        }
        ans+=count(i);
      }
      cout<<ans;

}
