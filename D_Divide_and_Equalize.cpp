#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool can_equalize(const vector<long long>& arr) {
    int n = arr.size();
    long long product = 1;
    
    // Calculate the product of all numbers
    for (long long num : arr) {
        if (product > 1e18 / num) {  // Check for overflow
            product = -1;
            break;
        }
        product *= num;
    }
    
    if (product == -1) {
        // Handle large numbers: check if all numbers have the same set of prime factors
        vector<int> prime_factors(1e6 + 1, 0);
        for (long long num : arr) {
            for (int i = 2; i * i <= num; ++i) {
                int count = 0;
                while (num % i == 0) {
                    num /= i;
                    count++;
                }
                if (count > 0) {
                    if (prime_factors[i] == 0) prime_factors[i] = count;
                    else if (prime_factors[i] != count) return false;
                }
            }
            if (num > 1) {
                if (prime_factors[num] == 0) prime_factors[num] = 1;
                else if (prime_factors[num] != 1) return false;
            }
        }
        return true;
    }
    
    // Check if the n-th root of the product is an integer
    double root = pow(product, 1.0 / n);
    long long rounded_root = round(root);
    return pow(rounded_root, n) == product;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        if (can_equalize(arr)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}