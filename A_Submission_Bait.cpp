#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;


void solve() {
    ll n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    // sort(v.rbegin(),v.rend());
    // for(auto it:v){
    //     cout<<it<<" "; 
    // }
    // cout<<endl;
    unordered_map<int,int>mp;
    priority_queue<ii>pq;
    int mx =-1;
    int fr =0;
    for(auto it:v){
        mp[it]++;
        
    }
    for(auto it:mp){
        pq.push({it.second,it.first});
    }
    while(!pq.empty()){
        auto x = pq.top();
        pq.pop();
        if(x.first%2!=0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
 
signed main() {

    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
