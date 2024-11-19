#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        vector<vector<int>> pa(26, vector<int>(n + 1, 0));
        vector<vector<int>> pb(26, vector<int>(n + 1, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                pa[j][i + 1] = pa[j][i];
                pb[j][i + 1] = pb[j][i];
            }
            pa[a[i] - 'a'][i + 1]++;
            pb[b[i] - 'a'][i + 1]++;
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            --l; --r;
            int ops = 0;
            for (int i = 0; i < 26; i++) {
                ops += abs(pa[i][r + 1] - pa[i][l] - (pb[i][r + 1] - pb[i][l]));
            }
            cout << ops / 2 << endl;
        }
    }
    return 0;
}