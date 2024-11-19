
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main(){
    fast_io;    
    int t,A,B;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>pf;
        map<ll,ll>mp;
        ll mx=INT_MIN;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)pf.pb(i);
            while(n%i==0){
                mp[i]++;
                n/=i;
            }
            mx=max(mp[i],mx);
        }
        if(n>1){
            if(find(pf.begin(),pf.end(),n)==pf.end())
                pf.pb(n);
            mp[n]++;
            mx=max(mp[n],mx);

        }
        ll ans=0;
        //cout<<mx<<" "<<mp[2]<<endl;
        for(int i=0;i<mx;i++){
            ll curr=1;
            ll x=INT_MAX;
            for(int j=0;j<pf.size();j++){
                if(mp[pf[j]]>0){
                    curr*=pf[j];
                    x=min(x,mp[pf[j]]);
                }
            }
            if(curr>1)
            ans+=curr*x;
            for(int j=0;j<pf.size();j++){
                if(mp[pf[j]]>0){
                    mp[pf[j]]-=x;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}