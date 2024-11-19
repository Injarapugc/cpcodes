#include<bits/stdc++.h>
using namespace std; using ll=long long int;
#define tc int t; cin >> t; while(t--)
ll w,h,n;
bool check(ll x){
    if(x/h==0||x/w==0) return false;
    return ((x/h)*(x/w))>=n;
   
}

int main(){
ios_base::sync_with_stdio(0); cin.tie(nullptr);

    cin>>w>>h>>n;
    ll lo=0;
    ll hi=1e18;
    ll ans= 0;
    while(lo<=hi){
        ll mid = lo + (hi-lo)/2;
        if(check(mid)){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }

    cout<<ans<<endl;
     

}