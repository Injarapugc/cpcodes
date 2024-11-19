#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform binary search
bool binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Ensure array is sorted
    sort(arr.begin(), arr.end());

    while (k--) {
        int query;
        cin >> query;

        if (binarySearch(arr, query)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}