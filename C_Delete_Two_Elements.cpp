#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   
    int t;
    cin>>t;

    while (t--){
        ll n;
        cin>>n;

        ll sum = 0;
        vl a(n + 1);
        
        for (int i = 1;i<=n;i++){
            cin>>a[i];
            sum += a[i];
        }
        
        //find the number of pairs (i,j) such that a[i] + a[j] == 2 * sum / n
        ll req = 2 * sum / n;
        map<ll,ll>cnt;
        ll ans = 0;

        if ((sum - req) * n != sum * (n - 2)){
            cout<<0<<'\n';
            continue;
        }

        for (int i = 1;i<=n;i++){
            ans += cnt[req - a[i]];
            cnt[a[i]]++;
        }
        
        cout<<ans<<'\n';
    }
    return 0;
}