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
    while (t--)
    {
        ll n,m;cin>>n>>m;
        string s;
        cin>>s;
        ll i=0;
        ll ans;
        while(n--)
        {
            int aa=s[i]-'0';
            if(aa<=m)
            {
                ans=i;
                break;
            }
            i++;
        }
        ll si=s.length();
        for(ll i=0;i<si;i++)
        {
            if(i==ans)
            {
                cout<<m;
                cout<<s[i];
            }
            else
            cout<<s[i];
        }
        cout<<endl;


        
    }
    
    return 0;
}