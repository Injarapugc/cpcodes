#include <iostream>
#include <vector>
#include <set>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <utility>

using namespace std;

#define ll long long int
#define mod 1000000007

// Function to count the number of bits in the binary representation of a number
ll countBits(int n) {
    ll ans = 0;
    while (n > 0) {
        n /= 2;
        ans++;
    }
    return ans;
}

// Function to adjust adjacent elements with the same number of bits
void adjustAdjacentElements(ll i, ll f, vector<ll>& a,ll gg) {
    ll n = a.size();
    if (f == 1) {  // adjust elements to the right
        for (int j = i + 1; j < n; j++) {
            if (countBits(a[j - 1]) == countBits(a[j])) {
                if (a[j - 1] > a[j]) swap(a[j - 1], a[j]);
                else break;
            }
        }
    } else {  // adjust elements to the left
        for (int j = i; j >= 0; j--) {
            if (countBits(a[j - 1]) == countBits(a[j])) {
                if (a[j - 1] > a[j]) swap(a[j - 1], a[j]);
                else break;
            }
        }
    }
}

// Function to solve the problem
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    set<ll> g;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        g.insert(a[i]);
    }
    for (int i = 0; i < n; i++) {
        ll f;
        auto it = std::distance(g.begin(), g.find(a[i]));
        if (it == i) continue;
        if (it > i) f = 1;
        else f = 0;
        adjustAdjacentElements(i, f, a);
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}