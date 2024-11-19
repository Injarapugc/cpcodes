#include <bits/stdc++.h>
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
void sol();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
long long lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
bool compare_col(const vector<int> &v1, const vector<int> &v2)
{
    return v1[1] < v2[1];
}
void sol()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m)), pre(n, vector<int>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // ? ? sort(a.begin(), a.end(), compare_col);
    ll ans=0;
    for (ll i = 0; i < m; i++)
    {
        vector<ll> temp;
        ll sum = 0;
        for (ll j = 0; j < n; j++)
        {
            temp.push_back(a[j][i]);
            sum+=a[j][i];
        }
        ll curr = 0;
        sort(temp.begin(), temp.end());
        for (ll j = 0; j < n; j++)
        {
            curr += temp[j];
            ans += abs((sum - curr) - (n - 1 - j) * temp[j]);
        }
    }
    // for (ll i = 0; i < m; i++)
    // {
    //     ll sum = 0;
    //     for (ll j = 0; j < n; j++)
    //     {
    //         sum += a[j][i];
    //         pre[j][i] = sum;
    //     }
    // }
    // for (ll i = 0; i < m; i++)
    // {
    //     for (ll j = 0; j < n; j++)
    //     {
    //         ans += abs(pre[n - 1][i] - pre[j][i] - (n - 1 - j) * a[j][i]);
    //         // cout << abs(pre[n - 1][i] - pre[j][i] - (n - 1 - j) * a[j][i]) << " ";
    //     }
    // }
    cout << ans << "\n";
}