#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll a,b;
    cin>>a>>b;
    vi a1(a),b1(b);
    for(auto &x:a1)cin>>x;
    for(auto &x:b1)cin>>x;
    sort(a1.begin(),a1.end());
    for(int i=0;i<b;i++)
    {
        int it=lower_bound(a1.begin(),a1.end(),b1[i])-a1.begin();
        cout<<it;


    }

    
}
int main()
{
   solve();
}