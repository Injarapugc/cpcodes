#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            if(s[i]=='1') v[i]=1;
        }
        bool win = false;
        if(v[0]||v[n-1]) win=true;
        for(int i = 1; i < n; i++) {
            if(v[i]&&v[i-1]) win=true;
        }
        if(win) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}