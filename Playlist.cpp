#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    set<int> a;
     vi s(n);
    for(auto &x:s)cin>>x;
    ll t;
    int m=0;
    m=t=0;
    for(ll i=0;i<n;i++)
    {
        while(a.count(s[i]))
        {
            a.erase(s[t]);
            t++;
        }
        a.insert(s[i]);
        ll x=a.size();
        m=max(m,(int)a.size());
    }
    cout<<m<<endl;
}
int main()
{
    solve();
}