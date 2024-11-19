#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    vector<vector<bool>> dp(n + 1, vector<bool>(k + 1, false));
    dp[0][0] = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= k; j++)
        {
            if(dp[i][j])
            {
               
                for(int l = a[i]; l <= b[i]; l++)
                {
                    if(j + l <= k)
                    {
                        dp[i + 1][j + l] = true;
                    }
                }
            }
        }
    }
    if(dp[n][k])
    {
        cout << "YES\n";
        vector<ll> ans;
        int sum = k;
        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = a[i]; j <= b[i]; j++)
            {
                if(sum - j >= 0 && dp[i][sum - j])
                {
                   
                    ans.push_back(j);
                    sum -= j;
                    break;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        for(auto x : ans)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}