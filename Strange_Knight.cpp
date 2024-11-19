#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int SIZE = 257, MOD = 1e9 + 7;

int main() {
    int numTests;
    cin >> numTests;
    while (numTests--) {
        ll numMoves;
        cin >> numMoves;
        vector<pair<ll, ll>> moves(numMoves);
        for (auto &move : moves) cin >> move.first >> move.second;

        ll dp[SIZE][SIZE];
        memset(dp, 0, sizeof(dp));
        dp[1][1] = 1;

        for (ll move = 0; move < numMoves; move++) {
            ll ndp[SIZE][SIZE];
            memset(ndp, 0, sizeof(ndp));

            // Calculate prefix sum
            for (int row = 1; row < SIZE; row++) {
                for (int col = 1; col < SIZE; col++) {
                    dp[row][col] = (dp[row][col] + dp[row][col - 1] + dp[row - 1][col] - dp[row - 1][col - 1] + MOD) % MOD;
                }
            }

            // Update dp array
            for (ll row = 1; row < SIZE; row++) {
                for (ll col = 1; col < SIZE; col++) {
                    ll rowStart = max(1LL, row - moves[move].first);
                    ll colStart = max(1LL, col - moves[move].second);
                    ll rowEnd = min(256LL, row + moves[move].first);
                    ll colEnd = min(256LL, col + moves[move].second);
                    ndp[row][col] = (dp[rowEnd][colEnd] - dp[rowEnd][colEnd - 1] - dp[rowStart - 1][colEnd] + dp[rowStart - 1][colStart - 1]) % MOD;
                }
            }
            swap(dp, ndp);
        }
        cout << dp[1][1] << endl;
    }
}