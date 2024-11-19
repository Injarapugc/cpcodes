#include <iostream>

using namespace std;

int count_ways(int n) {
  int dp[n+1];
  dp[0] = 1;
  for (int i = 1; i <= n; i++) {
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6];
  }
  return dp[n];
}

int main() {
    int n;cin>>n;
  cout << count_ways(n) << endl;  // Output: 4
  return 0;
}
