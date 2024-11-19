#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
#define ss(a) sort(a.begin(),a.end())
/*
      "Beloved,
       never avenge yourselves,
        but leave it to the wrath of God, for it is written,
        Vengeance is mine, I will repay" - ROMAN 12:19
 */

/*
    Remeber the pain
    Remeber how worthless they made you feel
    Turn that pain into anger
    and show them who you're really are
*/

using namespace std;
bool check(const std::string& s) {
    int len = s.length();
    int side = sqrt(len);
    if (side * side != len) return false;
    if (side == 2) return s == "1111";

    for (int i = 0; i < side; i++)
        if (s[i] != '1' || s[len - side + i] != '1')
            return false;

    for (int r = 1; r < side - 1; r++) {
        int start = r * side;
        if (s[start] != '1' || s[start + side - 1] != '1')
            return false;
        for (int c = 1; c < side - 1; c++)
            if (s[start + c] != '0')
                return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << (check(s) ? "Yes" : "No") << '\n';
    }
    return 0;
}