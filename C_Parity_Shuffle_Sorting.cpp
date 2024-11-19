/*

_/_/_/_/     _/      _/    _/
_/     _/    _/      _/    _/
_/      _/   _/      _/    _/
_/      _/   _/_/_/_/_/    _/
_/     _/    _/      _/    _/
_/    _/     _/      _/    _/
_/_/_/       _/      _/    _/_/_/_/_/

*/
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef   long long ll;
constexpr ll P = 1e9 + 7;
const int N = 1e6 + 50;
const int M = 300005;
const double PI = acos(-1);
#define INF  10000000007
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll  Exgcd(ll a, ll b, ll& x, ll& y) {
	if (!b)
	{
		x = 1, y = 0;
		return a;
	}
	ll d = Exgcd(b, a % b, y, x);
	y -= a / b * x;
	return d;
}
ll fpm(ll a, ll n, ll m)
{
	ll ans = 1;
	a %= m;
	while (n)
	{
		if (n & 1)
		{
			ans = (ans * a) % m;
		}
		a = (a * a) % P;
		n >>= 1;
	}
	return ans;
}
ll   fac[N];
ll C(ll n, ll m)
{
	return fac[n] * fpm(fac[n - m], P - 2, P) % P * fpm(fac[m], P - 2, P) % P;
}
ll n, m, k, x, y, z, l, r, u, v, q, d;
ll cnt1, anss1, minn, ans, cnt, anss;
ll  a[M], b[M], c[M], sum[M];
string s, ss;
void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (n == 1)
	{
		cout << 0 << endl;
		return;
	}
	cout << n - 1 << endl;
	cout << 1 << " " << n << endl;
	if ((a[1] + a[n]) & 1)
	{
		a[n] = a[1];
	}
	else
	{
		a[1] = a[n];
	}
	for (int i = 2; i <= n - 1; i++)
	{
		if ((a[i] + a[1]) & 1)
		{
			cout << 1 << " " << i << endl;
		}
		else
		{
			cout << i << " " << n << endl;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int T = 1;
	cin >> T;
	while (T--)
	{
		solve();
	}
	return 0;
}
//ll pri[M], st[M], phi[M];
//void is_prime(ll n)
//{
//	phi[1] = 1;
//	for (register int i = 2; i <= n; i++)
//	{
//		if (!st[i])pri[++cnt] = i, phi[i] = i - 1;
//		for (int j = 1; j <= cnt && pri[  j] <= n / i; j++)
//		{
//			st[pri[j] * i] = 1;
//			if (i % pri[j] == 0)
//			{
//				phi[i * pri[j]] = phi[i] * pri[j];
//				break;
//			}
//			else
//			{
//				phi[i * pri[j]] = phi[i] * phi[pri[j]];
//			}  
//		}
//	}
//}
 	 	      	  					  	 		  				