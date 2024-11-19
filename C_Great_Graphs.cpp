#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;  // number of test cases
    cin >> t;
    
    while (t--) {
        int n;  // number of pastures
        cin >> n;
        
        vector<long long> d(n);
        for (int i = 0; i < n; ++i) {
            cin >> d[i];  // read the array d
        }
        
        sort(d.begin(), d.end());  // Sort the array d
        
        long long totalCost = 0;  // To store the total minimal cost
        
        // Accumulate the contributions to the total cost
        for (int i = 0; i < n - 1; ++i) {
            totalCost += (i + 1) * d[i + 1] - (i + 1) * d[i];
        }
        
        cout << totalCost << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);  // Faster input/output
    cin.tie(nullptr);  // Untie cin/cout
    
    solve();  // Call the solver function
    return 0;
}
