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
      const int N=1e6+1;
      vector<int> s(N,0);
     for(int i=1;i<N;i++)
     {
         for(int j=i;j<N;j+=i)s[j]++;
     }
    while(t--)
    {
        ll x;cin>>x;
        cout<<s[x]<<endl;
      
    }
}
