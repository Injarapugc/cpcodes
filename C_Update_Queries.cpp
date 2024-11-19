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
    ll n,m;
    cin>>n>>m;
    vi a(m);
    string s,c;
    cin>>s;
    fi(i,m,0)cin>>a[i];
    vi freq(n,0);
    cin>>c;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    int i=0;
    int k=0;
    while(i<m)
    {
        ll j=a[i];
        j--;
        if(freq[j]==0)
        {
            s[j]=c[k];
            k++;
            freq[j]++;
        }
        i++;

    }
    cout<<s<<endl;


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
