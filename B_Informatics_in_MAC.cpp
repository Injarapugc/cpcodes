/* Includes */
#include <bits/stdc++.h>
 
/* Using libraries */
using namespace std;

/* Defines */
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vc vector
#define pii pair <int, int>
#define int long long
 
void solve () {
    int n;
    cin >> n;
    vc <int> a(n);
    vc <int> cnt1(n + 1), cnt2(n + 1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt2[a[i]]++;
    }
    int mex1 = 0, mex2 = 0;
    while (cnt2[mex2])
        ++mex2;
    for (int i = 0; i < n; ++i) {
        cnt1[a[i]]++;
        if (--cnt2[a[i]] == 0 && mex2 > a[i]) {
               mex2=a[i];
        }
        
        while (mex2 && !cnt2[mex2 - 1])
            --mex2;
        while (cnt1[mex1])
            ++mex1;
        if (mex1 == mex2) {
            cout << "2\n";
            cout << 1 << " " << i + 1 << "\n";
            cout << i + 2 << " " << n << "\n";
            return;
        }
    }
    cout << "-1\n";
}

signed main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
