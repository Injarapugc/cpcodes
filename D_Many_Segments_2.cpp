#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+10;
// int l[N],r[N];
int main(){
    int n,m; cin>>n>>m;
    vector<int> mi(m+2,m+1);
    ll ans=0;
    for(int i=1;i<=n;i++){
        int l,r; cin>>l>>r;
        mi[l]=min(mi[l],r);
    }
    for(int i=m;i>=1;i--){
        mi[i]=min(mi[i+1],mi[i]);
        ans+=mi[i]-i;
    }
    cout<<ans<<"\n";
}