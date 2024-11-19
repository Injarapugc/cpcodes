#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> unique_chars;
        long long total = 0;

        for (int i = 0; i < n; i++) {
            unique_chars.insert(s[i]);
            total += unique_chars.size();
        }

        cout << total << endl;
    }

    return 0;
}