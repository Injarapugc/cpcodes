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
    string s;
    cin>>s;
        int m=1e9;
    for(char i='a';i<='z';i++)
    {
        ll j=0;
        ll k=n-1;
        char r=i;
        int c=0;
        while (j<=k)
        {
            if(s[j]==s[k])
            {
                j++;
                k--;
            }
            else if(s[j]==i)
            {
                j++;
                c++;
            }
            else if(s[k]==i)
            {
                k--;
                c++;
            }
            else
            {
                c=1e9;
                break;
            }
        }
        m=min(c,m);
    }
    if(m==1e9) cout<<-1<<endl;
    else cout<<m<<endl;;;

    
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