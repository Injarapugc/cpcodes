#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> H(N);
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }

    vector<bool> is_good(N, true);

    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        --A; --B; // Convert to 0-based indexing

        if (H[A] <= H[B]) is_good[A] = false;
        if (H[B] <= H[A]) is_good[B] = false;
    }

    int count = 0;
    for (bool good : is_good) {
        if (good) ++count;
    }

    cout << count << endl;

    return 0;
}