#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int mod=1000000007;
void solve()
{
    int n;cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    int c;
    for(int i=2;i<n;i+=2)
    {
        c=0;
        int x=s[i-2]-'0',y=s[i-1]-'0',z=s[i]-'0';
        if((x|y)==z) c++;
        if((x&y)==z) c++;
        if((x^y)==z) c++;
        if(ans==0&&i==2) ans=c;
        else ans=(ans*c)%mod;
    }
    cout<<ans<<endl;
  


    
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