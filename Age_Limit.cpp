#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t ;cin>>t;
    while(t--)
    {
        int x,y,z;cin>>x>>y>>z;
        if(z>=x&&z<y)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}