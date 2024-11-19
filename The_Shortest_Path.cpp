#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i, n, x) for (int i = x; i < int(n); i++)
#define mod 1000000007
 
ll n;
map<string, int> mp;
 
int dfs(vector<pair<int, int>> a[], int s, int d) {
    vi di(n + 1, 1e9);
    di[s] = 0;
 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    while (!q.empty()) {
        auto [dist, nod] = q.top();
        q.pop();
        if(di[nod]<dist) continue;
       
        for (auto x : a[nod]) {
            auto [x1, x2] = x;
            if(di[x1]==1e9)
            {
                di[x1]=dist+x2;
                q.push({dist+x2,x1});
            }
            else if(dist+x2<di[x1])
            {
                di[x1]=dist+x2;
                q.push({di[x1],x1});
                
            }
        }
    }
    return di[d];
}
 
void solve() {
    cin >> n;
    vector<pair<int,int>> a[n+1];
    fi(i, n, 0) {
        string gg;
        cin >> gg;
        mp[gg] = i + 1;
        int k;
        cin >> k;
        fi(j, k, 0) {
            int x1, x2;
            cin >> x1 >> x2;
            a[mp[gg]].push_back({x1, x2});
        }
    }
    int k;
    cin >> k;
      cin.ignore(); // To ignore the newline character left by previous input
  
    fi(i, k, 0) {
        string gg;
        getline(cin, gg);
        vector<string> ff(2);
        stringstream ss(gg);
        string temp;
        int kk = 0;
        while (getline(ss, temp, ' ')) {
            ff[kk++] = temp;
        }
        cout << dfs(a, mp[ff[0]], mp[ff[1]]) << endl;
    }
}
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}