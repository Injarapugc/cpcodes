#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to count numbers in the range [l, r]
int countInRange(const vector<int>& arr, int l, int r) {
    auto left = lower_bound(arr.begin(), arr.end(), l);
    auto right = upper_bound(arr.begin(), arr.end(), r);

    return right - left;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    int k;
    cin >> k;

    while (k--) {
        int l, r;
        cin >> l >> r;

        cout << countInRange(arr, l, r) << " ";
    }

    return 0;
}