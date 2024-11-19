# include <bits/stdc++.h>

using namespace std;

int t, n;
string S;
long long ans;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> t;
	while (t --){
		cin >> n >> S, ans = n;
		for (int i = 1; i < n; ++ i)
			if (S[i] != S[i - 1])
				ans += i;
		cout << ans << '\n';
	}

	return 0;
}