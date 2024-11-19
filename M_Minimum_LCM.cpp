#include <bits/stdc++.h>
#define ll long long
using namespace std;
void flush(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
const long long  N = 2e5;
const long long O=1e5+5;
const ll G=1e5;
//long long k,mn=1e18,mx=-1e18;
ll freq[26]={0};
//ll b[N];
ll a[N];
char arr[N];
const long long INF = 4294967296;
vector<ll> v;
    int main() {
    flush();
   ll t;
   cin>>t;
   while(t--){
       ll n,ans=0;
       char c;
       string s;
       cin>>n>>c;
       cin>>s;
      vector<ll> idx;
      for(ll i=0;i<n;i++){
          if(s[i]=='g') idx.push_back(i);
      }
      for(ll i=0;i<n;i++){
          if(s[i]!=c) continue;
          ll p= lower_bound(idx.begin(),idx.end(),i)-idx.begin();
          if(p!=idx.size()) {
              ans = max(ans, idx[p] - i);
          }
          else {
              ans= max(ans,n-i+idx.front());
          }
      }
   cout<<ans<<"\n";

   }
    return 0;
}

			   	   	  		    					 	    	