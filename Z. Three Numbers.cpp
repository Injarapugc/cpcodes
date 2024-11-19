#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll k, s, ans = 0, max_value, min_value;
   cin >> k >> s;
for (int x = 0; x <= k; x++) {
    if (s - x >= 0)
        max_value = min(s - x, k);
    else continue;
    min_value = (s - x - max_value);
    if (min_value >= 0 && min_value <= k && min_value <= max_value) {
        ans += max_value - min_value + 1;
    }
}
cout << ans << "\n";
}