#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
#define pb push_back
#define pob pop_back
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



void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    
    vector<int> c(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> c[i];
    }
    
    // Sort k in descending order
    sort(k.rbegin(), k.rend());
    
    ll total_cost = 0;
    int gift_index = 1;
    
    for (int i = 0; i < n; i++) {
        if (gift_index <= m && gift_index <= k[i] && c[gift_index] < c[k[i]]) {
            total_cost += c[gift_index];
            gift_index++;
        } else {
            total_cost += c[k[i]];
        }
    }
    
    cout << total_cost << "\n";
}

  
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}
