#include <bits/stdc++.h>
#define ll long long
#define llinf LLONG_MAX
#define llminf LLONG_MIN
#define inf INT_MAX
#define minf INT_MIN
const long long mod = 1e9 + 7;

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int pref[n];
        pref[0]=0;
        for (int i = 1;i<n;i++) {
            pref[i]=pref[i-1];
            if (s[i]!=s[i-1]) pref[i]++;
        }
        int mn = inf;
        for (int i = 0;i<=n-k;i++) {
            if (s[i+k-1]=='1') mn=min(mn,pref[i+k-1]-pref[i]);
            else mn=min(mn,pref[i+k-1]-pref[i]+1);
        }
        cout << mn << endl;
    }
}