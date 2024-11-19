#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (n == 1) {
        cout << "1\n";
        return;
    }
    
    // Sort array to make it easier to find gaps
    sort(a.begin(), a.end());
    
    // Find GCD of differences
    ll g = 0;
    for (int i = 1; i < n; i++) {
        g = gcd(g, a[i] - a[i-1]);
    }
    
    // Find maximum value in array
    ll mx = a.back();
    
    // Find minimum operations needed
    ll min_ops = LLONG_MAX;
    
    // Try inserting at the end
    ll last_insert = mx + g;
    ll ops = 0;
    for (ll val : a) {
        ops += (mx - val) / g;
    }
    min_ops = min(min_ops, ops);
    
    // Try inserting in gaps
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i-1] > g) {
            // We can insert in this gap
            for (ll insert = a[i-1] + g; insert < a[i]; insert += g) {
                ll max_val = mx;
                ll curr_ops = 0;
                
                // Calculate ops for all numbers below max_val
                for (ll val : a) {
                    curr_ops += (max_val - val) / g;
                }
                curr_ops += (max_val - insert) / g;
                
                min_ops = min(min_ops, curr_ops);
            }
        }
    }
    
    // Try inserting before the first element
    for (ll insert = a[0] - g; insert >= a[0] - 100 * g; insert -= g) {
        ll max_val = mx;
        ll curr_ops = 0;
        
        for (ll val : a) {
            curr_ops += (max_val - val) / g;
        }
        curr_ops += (max_val - insert) / g;
        
        min_ops = min(min_ops, curr_ops);
    }
    
    cout << min_ops << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}