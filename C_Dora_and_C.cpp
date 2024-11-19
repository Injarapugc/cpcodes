#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
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




void solve() {
    ll p, q, r; cin >> p >> q >> r;
    ll s = __gcd(q, r);
    ll arr[100010];
    for(int i = 1; i <= p; i++) {
        cin >> arr[i];
        arr[i] %= s;
    }
    sort(arr + 1, arr + 1 + p);
    ll ans = arr[p] - arr[1];

    for(int i = 1; i < p; i++) {
        ans = min(ans, arr[i] + s - arr[i + 1]);
    }
    cout << ans << '\n';
}



int main() {

        ll t; cin >> t;

        while(t--) {

                solve();

        }

}