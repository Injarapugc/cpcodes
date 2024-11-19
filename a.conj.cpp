#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAX_N = 10000000;
vector<bool> is_prime(MAX_N, true);
vector<bool> is_sum_of_square_and_fourth(MAX_N, false);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX_N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void precompute() {
    for (long long x = 0; x * x < MAX_N; x++) {
        for (long long y = 0; x * x + y * y * y * y < MAX_N; y++) {
            is_sum_of_square_and_fourth[x * x + y * y * y * y] = true;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && is_sum_of_square_and_fourth[i]) {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}