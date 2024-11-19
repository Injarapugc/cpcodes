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
        ll c;cin>>c;
        bitset<64> a(c);
        int i;
        for(int j=63;j>=0;j--)
        {
            if(a[j]==1)
            {
                i=j;
                break;
            }
        }
        ll a[i+1],b[i+1];
        a[i+1]=b[i+1]={0};
        for(int j=i-1;j>=0;j--)
        {
            if()
        }

}
