#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long int
#define fi(i,n,x) for (int i = x; i < int(n); i++)

vector<ll> p, r;

ll find(ll i) {
    if (p[i] == i) return i;
    return p[i] = find(p[i]);  // Path compression
}

void uni(ll i, ll j) {
    ll x1 = find(i), x2 = find(j);
    if (x1 == x2) return;
    if (r[x1] > r[x2]) p[x2] = x1;
    else if (r[x1] < r[x2]) p[x1] = x2;
    else {
        p[x1] = x2;
        r[x2]++;
    }
}

void solve() {
    ll n, m;
    cin >> n >> m;
    
    // Initialize DSU
    p.resize(n);
    r.assign(n, 0);
    for (ll i = 0; i < n; i++) p[i] = i;
    
    // Process groups
    for (ll i = 0; i < m; i++) {
        ll k;
        cin >> k;
        vector<ll> group(k);
        for (ll j = 0; j < k; j++) {
            cin >> group[j];
            group[j]--;  // Convert to 0-based indexing
        }
        // Union all users in the group
        for (ll j = 1; j < k; j++) {
            uni(group[0], group[j]);
        }
    }
    
    // Count set sizes
    map<ll, ll> setSize;
    for (ll i = 0; i < n; i++) {
        ll root = find(i);
        setSize[root]++;
    }
    
    // Output results
    for (ll i = 0; i < n; i++) {
        cout << setSize[find(i)] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t = 1;  // Set to 1 for single test case
    // cin >> t;  // Uncomment this line for multiple test cases
    while (t--) {
        solve();
    }
    return 0;
}