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
      string s;cin>>s;
      ll n=s.length();
      ll noofsequences=(1<<n)-1;
      for(ll i =1;i<=noofsequences;i++)
      {
        ll temp=i,j=0;
        while(temp>0)
        {
            if(temp&1)
            cout<<s[j];
            j++;
            temp=temp>>1;

        }
        cout<<"\n";
      }


}
