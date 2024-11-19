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
    ll i=0;
    fi(j,s.length(),0)
    {
        if(s[j]=='x')
        {i++;
          s[j]=s[j+1]=s[j+2]='o';
        }
    }
    cout<<i<<endl;
  


    
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