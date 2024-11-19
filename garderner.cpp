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
         string s;cin>>s;
         ll l=s.length();
         sort(s.begin(),s.end());
         char a=s[0];
         char c=s[1];
         string b {s.begin()+2,s.end()};
         cout<<a<<" "<<b<<" "<<c<<"\n";

      }

}
