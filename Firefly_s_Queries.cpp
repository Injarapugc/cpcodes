#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int64_t> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Precompute the cyclic concatenated array sum
        vector<int64_t> prefixSum(2 * n + 1, 0);
        for (int i = 1; i <= 2 * n; ++i) {
            prefixSum[i] = prefixSum[i - 1] + arr[(i - 1) % n];
        }

        // Process each query
        for (int i = 0; i < q; ++i) {
            int l, r;
            cin >> l >> r;
            cout << prefixSum[r] - prefixSum[l - 1] << endl;
        }
    }

    return 0;
}
