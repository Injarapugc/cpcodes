#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

       
        for (int i = 1; i < n; i++) {
            cout << i << " ";
        }
        cout << n << endl;

        int diff = n / 2;
      
        if (n % 2 != 0) {
            cout << n << " ";
            for (int i = 2; i < n; i++) {
                if (i + diff > n - 1) {
                    cout << i - diff << " ";
                } else {
                    cout << i + diff << " ";
                }
            }
        } else {
            for (int i = 1; i < n; i++) {
                if (i + diff > n) {
                    cout << i - diff << " ";
                } else {
                    cout << i + diff << " ";
                }
            }
        }
        if(n!=1)cout<<n-diff<<endl;
        else
        {
          cout<<endl;

        }
       
    }
    return 0;
}
