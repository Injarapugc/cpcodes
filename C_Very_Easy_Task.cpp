#include <iostream>

using namespace std;
#define MOD 1000000007
#define INF 5e18
typedef long long ll;

bool is_it_possible(int t, int n, int x, int y)
{
    if (t < min(x, y))
        return false;

   ll  cnt = 1;
    t -= min(x, y);
    cnt+=t / x ;
    cnt+=t/y;
    return cnt >= n;
}

int main()
{
    ll n, x, y;
    cin >> n >> x >> y;

    ll l = 0, r =2e8, mid;

    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (is_it_possible(mid, n, x, y))
            r = mid;
        else
            l = mid;
    }
    cout << r;
}