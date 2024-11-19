#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i, n, x) for (int i = x; i < int(n); i++)
#define mod 1000000007

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vii> a(n + 1);
    
    fi(i, m, 0) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        a[x1].push_back({x2, x3});
        a[x2].push_back({x1, x3});
    }

    vi d(n + 1, LLONG_MAX);
    vi p(n + 1, -1);
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0, 1});
    d[1] = 0;

    while (!q.empty()) {
        auto [dist, node] = q.top();
        q.pop();

        if (dist > d[node]) continue;

        for (auto [nod, dis] : a[node]) {
            if (dis + dist < d[nod]) {
                d[nod] = dis + dist;
                q.push({d[nod], nod});
                p[nod] = node;
            }
        }
    }

    if (d[n] == LLONG_MAX) {
        cout << -1 << endl;
        return;
    }

    vector<int> path;
    for (int at = n; at != -1; at = p[at]) {
        path.push_back(at);
    }
    reverse(path.begin(), path.end());

    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
