#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int min_changes(int n, int x, vector<int>& piles) {
    int changes = 0;
    int affinity = piles[0];

    for (int i = 1; i < n; i++) {
        // Check if the current pile is within the affinity range
        if (abs(piles[i] - affinity) > x) {
            // Update affinity to the range that covers the current pile
            affinity = (piles[i] - x > 0) ? piles[i] - x : piles[i] + x;
            changes += 1;
        }
    }

    return changes;
}

int main() {
    int test_cases;
    cin >> test_cases;

    for (int t = 0; t < test_cases; t++) {
        int n, x;
        cin >> n >> x;

        vector<int> piles(n);
        for (int i = 0; i < n; i++) {
            cin >> piles[i];
        }

        int result = min_changes(n, x, piles);
        cout << result << endl;
    }

    return 0;
}