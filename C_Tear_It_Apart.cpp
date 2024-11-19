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
    ll n=(ll)s.length();
    ll mm=INT_MAX;
    for(int i='a';i<='z';i++)
    {
        ll c=0;
        ll m=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]!=i)
            {
                c++;
                m=max(c,m);
            }
            else
            {
                c=0;
            }

        }
        mm=min(mm,m);
    }
    if(mm==0)cout<<0<<endl;
    else
    {
        int c=0;
        c+=mm/2;
        c+=mm%2==0?0:1;
        cout<<c<<endl;
    }
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