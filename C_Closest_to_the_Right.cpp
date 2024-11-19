#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the minimum index of an array element not less than the target
int findIndex(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left + 1; // +1 because indices are 1-based in the problem
}

int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (k--) {
        int query;
        cin >> query;

        cout << findIndex(arr, query) << endl;
    }

    return 0;
}