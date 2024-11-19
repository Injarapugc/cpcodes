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
      ll n;cin>>n;
      ll a=n/2;
      if(n&1==0)
      {
        cout<<a+1<<" "<<n-(a+1)<<endl;
      }
      else
      {
        cout<<a<<" "<<a+1<<endl;
      }

}
