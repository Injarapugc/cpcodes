#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
ll binary(ll a,ll b)
{
    if(b==0)return 1;
    ll res=binary(a,b/2);
    if(b&1)
    {
        return a*res*res;
    }
    else return res*res;
}

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

}
