#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
#define pb push_back
#define pob pop_back
#define ss(a) sort(a.begin(),a.end())

void solve() {
    ll n, q;
    cin >> n >> q;
    
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // dp[i] represents the maximum sum achievable from index i to n-1
    vector<ll> dp(n + 1, 0);
    
    // Fill the dp array
    ll pick = 0, not_pick = 0;
    for(int i = n - 1; i >= 0; i--) {
        pick = a[i] - not_pick;
        not_pick = dp[i + 1];
        dp[i] = max(pick, not_pick);
    }
    
    // The answer is the maximum sum achievable starting from index 0
    cout << dp[0] << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}