#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int ev = 0;
		int n, k; cin >> n >> k;
		int arr[n + 1]; for (int i = 1; i <= n; i++) {
			cin >> arr[i];
			ev += (arr[i] % 2 == 0);
		}
		if (ev > 2)ev = 2;
		int mn = 1e9;
		for (int i = 1; i <= n; i++) {
			if (arr[i] % k == 0)mn = 0;
			int x = ((arr[i] / k) + 1) * k;
			mn = min(mn, x - arr[i]);
		}


		if (k == 4) {

			mn = min(mn, 2 - ev);
		}

		cout << mn << '\n';

	}

	return 0;
}


		 		 			   			 			 					