#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr)
 
 
#define int long long
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define dbV(arr) cout << #arr << "=[ "; \
for(auto i:arr) cout << i << " "; cout << "]\n";
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i, n, x) for (int i = x; i < int(n); i++)
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repF(i,a,n) for(int i = (a); i <= (n); ++i)
#define repB(i,a,n) for(int i = (a); i >= (n); --i)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vp vector<pii>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define vd vector<double>
#define umii unordered_map<int,int>
#define umll unordered_map<ll,ll>
#define mii map<int,int>
#define mll map<ll,ll>
#define seti set<int>
#define setl set<ll>
#define pb push_back
#define F first
#define S second
#define all(z) z.begin(),z.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
 
using namespace std;
using ll = long long;
 
// const int MAXN = 100005;
const int MOD =1e9+7;
// const int INF = 1e18;
 
/*
 
“She just cut me off cold. And that, um… that hurt, you know. 
And I think that just that flipped a switch in me where I was like, 
“Okay, fuck you, watch this.” “
 
*/

 
 
// void solve(){
//     int n;cin>>n;
//     string s;
//     cin>>s;
//     map<char,int>omp,emp;
//     int ans = 0;
//     for(int i=0;i<n;i++){
//         if(i&1){
//             omp[s[i]]++;
//         }
//         else{
//             emp[s[i]]++;
//         }
//     }
//     vector<int,char>v;
    
// }
ll mod_exp(int a ,int b,int m) {
    int res = 1;
    a = a%m;
    while(b>0){
        if(b%2==1)res=(res*a)%m;
        b = b >> 1;
        a = (a*a)%m;
    }
    return res;
}
 
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0,sumSq = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum=(sum+v[i])%MOD;
        sumSq=(sumSq+v[i]*v[i])%MOD;
    }
    int P = (sum*sum%MOD-sumSq+MOD)%MOD;
    P = P*mod_exp(2,MOD-2,MOD)%MOD;
    int Q = (n*(n-1)/2)%MOD;
    int result = P*mod_exp(Q,MOD-2,MOD)%MOD;
    cout << result << "\n";
}
 
 
signed main(){
    FAST_IO;
    int t=1;
    cin>>t;
    // init();
    while (t--) {
         solve();
    }
    return 0;
}