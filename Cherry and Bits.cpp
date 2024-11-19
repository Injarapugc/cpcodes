#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define dbV(arr) cout << #arr << "=[ "; \
for(auto i:arr) cout << i << " "; cout << "]\n";
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repF(i,a,n) for(int i = (a); i <= (n); ++i)
#define repB(i,a,n) for(int i = (a); i >= (n); --i)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define umii unordered_map<int,int>
#define umll unordered_map<ll,ll>
#define mii map<int,int>
#define mll map<ll,ll>
#define seti set<int>
#define setl set<ll>
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define all(z) z.begin(),z.end()
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m; cin >> n >> m;
	vector<vi> dp(n + 2, vi(m + 2, 0));
	vector<string> mat(n);
	rep(i, n) cin >> mat[i];
	int Q; cin >> Q;
	while (Q--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		dp[x1][y1]++;
		dp[x2 + 1][y1]--;
		dp[x1][y2 + 1]--;
		dp[x2 + 1][y2 + 1]++;
	}
	repF(i, 1, n) {
		repF(j, 1, m) {
			dp[i][j] = (dp[i][j - 1] + dp[i][j]);
		}
	}
	repF(i, 1, m) {
		repF(j, 1, n) {
			dp[j][i] = (dp[j - 1][i] + dp[j][i]);
		}
	}
	repF(i, 1, n) {
		repF(j, 1, m) {
			dp[i][j] %= 2;
		}
	}
	repF(i, 1, n) {
		repF(j, 1, m) {
			if (dp[i][j])
				mat[i - 1][j - 1] ^= 1;
		}
	}
	rep(i, n) cout << mat[i] << '\n';
	return 0;
}