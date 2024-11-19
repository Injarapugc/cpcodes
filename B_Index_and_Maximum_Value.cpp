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
    ll n,m;
    cin>>n>>m;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    vi b;
    ll g=*max_element(a.begin(),a.end());
    fi(i,m,0)
    {
        char f;
        int a1,a2;
        cin>>f>>a1>>a2;
        if(a1<=g&&g<=a2)
        {
            if(f=='+') g++;
            else g--;
        }
        b.push_back(g);
    }
    fi(i,m,0)cout<<b[i]<<" ";
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}