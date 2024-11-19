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
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        vector<ii> ans;
        if(n&1)cout<<-1<<endl;
        else 
        {
            for(ll i=0;i<n;i+=2)
            {
                if(a[i]==a[i+1])
                {
                    ans.push_back({i+1,i+2});
                }
                else
                {
                    ans.push_back({i+1,i+1});
                    ans.push_back({i+2,i+2});
                }
            }
            cout<<ans.size()<<endl;
            for(auto x:ans)
            {
                cout<<x.first<<" "<<x.second<<endl;
            }
        }

    }

    return 0;
}