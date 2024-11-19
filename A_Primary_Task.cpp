#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;


void solve()
{
    string s;
    cin>>s;
    if(s.length()>=3)
    {
        if(s[0]=='1'&&s[1]=='0')
        {
            if(s[2]>='2'||(s.size()>=4&&s[2]>='1'))
            {
                cout<<"YES\n";
                return;
            }

        }
    }
    cout<<"NO\n";
    
}
  
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}
