#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
//code for finding first ele of the target 
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      vi a={1,1,1,2,2,2,3,3,3};
      int t=2;
      auto p=[&](int i){
         return a[i]<t;
      };
     int l=-1,r=a.size();
      while(r-l>1)
      {
        int m=(l+r)/2;
        if(p(m))l=m;
        else r=m;
      }
      cout<<r;

}
